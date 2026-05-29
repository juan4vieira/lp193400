/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/runs/code/49160111
Data        : 28/05/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<unsigned long, para números muito grande>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n, x;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &x) != 1) break;

        if (x == 64) {
            printf("1537228672809129 kg\n");
        } else {
            unsigned long long graos = (1ULL << x) - 1;
            unsigned long long kg = (graos / 12) / 1000;
            printf("%llu kg\n", kg);
        }
    }

    return 0;
}
