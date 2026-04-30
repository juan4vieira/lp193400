/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 14/04/2026
Objetivo    : Soma de ímpares consecutivos
Aprendizado : <<<aplicação dos comandos Else>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int x, y, soma = 0;
    int min, max;

    if (scanf("%d %d", &x, &y) != 2) return 0;

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }
  
    for (int i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
