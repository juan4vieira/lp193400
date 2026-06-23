/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 23/06/2026
Objetivo    : trocar os vetores
Aprendizado : <<<reforço de martrizes>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N[20];
    int i, temp;

    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    for (i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
