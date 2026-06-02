/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/runs/code/49208111
Data        : 21/05/2026
Objetivo    : figurinhas
Aprendizado : Uso de recursão
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        int f1, f2;
        if (scanf("%d %d", &f1, &f2) == 2) {
            printf("%d\n", mdc(f1, f2));
        }
    }

    return 0;
}
