/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Tabuada
Aprendizado : <<<Exercício de fixação>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N, i;

    scanf("%d", &N);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;
}
