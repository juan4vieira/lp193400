/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Encaixa ou não numero 2
Aprendizado : <<<Aperfeiçoamento de String>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char A[1005], B[1005];

    while (N--) {
        scanf("%s %s", A, B);

        int lenA = strlen(A);
        int lenB = strlen(B);

        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(A + (lenA - lenB), B) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
