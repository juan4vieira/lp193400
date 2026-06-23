/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 23/06/2026
Objetivo    : Sudoku
Aprendizado : <<<Seguir a lógica do sudoku >>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int validar_sudoku(int matriz[9][9]) {
    int i, j, k, l;
    int visitado[10];

    for (i = 0; i < 9; i++) {
        memset(visitado, 0, sizeof(visitado));
        for (j = 0; j < 9; j++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || visitado[num]) return 0;
            visitado[num] = 1;
        }
    }

    for (j = 0; j < 9; j++) {
        memset(visitado, 0, sizeof(visitado));
        for (i = 0; i < 9; i++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || visitado[num]) return 0;
            visitado[num] = 1;
        }
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            memset(visitado, 0, sizeof(visitado));
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    int num = matriz[i + k][j + l];
                    if (num < 1 || num > 9 || visitado[num]) return 0;
                    visitado[num] = 1;
                }
            }
        }
    }

    return 1;
}

int main() {
    int n, instancia, i, j;
    int matriz[9][9];

    if (scanf("%d", &n) != 1) return 0;

    for (instancia = 1; instancia <= n; instancia++) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                if (scanf("%d", &matriz[i][j]) != 1) return 0;
            }
        }

        printf("Instancia %d\n", instancia);
        if (validar_sudoku(matriz)) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }

    return 0;
}
