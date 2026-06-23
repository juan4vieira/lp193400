/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 23/06/2026
Objetivo    : matriz quadrada
Aprendizado : <<<reforço de martrizes>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;
    int i, j, valor;

    while (scanf("%d", &N) && N != 0) {
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= N; j++) {
                valor = i;
                if (j < valor) valor = j;
                if (N - i + 1 < valor) valor = N - i + 1;
                if (N - j + 1 < valor) valor = N - j + 1;

                if (j == 1) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
