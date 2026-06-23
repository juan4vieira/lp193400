/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 23/06/2026
Objetivo    : peencher o tabuleiro
Aprendizado : <<<reforço de martrizes>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N, M;
    int mat[105][105];
    int i, j;

    while (scanf("%d %d", &N, &M) != EOF) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                if (mat[i][j] == 1) {
                    printf("9");
                } else {
                    int paes = 0;
                    
                    if (i > 0 && mat[i - 1][j] == 1) paes++;
                    if (i < N - 1 && mat[i + 1][j] == 1) paes++;
                    if (j > 0 && mat[i][j - 1] == 1) paes++;
                    if (j < M - 1 && mat[i][j + 1] == 1) paes++;
                    
                    printf("%d", paes);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
