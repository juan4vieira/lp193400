/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/tournaments/rank/10382
Data        : 19/05/2026
Objetivo    : Vetores e Funções
Aprendizado : <<<Exercícios práticcos de aperfeiçoamento das funções e vetores>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

double calcularLitros(int tempo, int velocidade) {
    double distancia = tempo * velocidade;
    return distancia / 12.0;
}

int main() {
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);

    double litros = calcularLitros(tempo, velocidade);

    printf("%.3f\n", litros);

    return 0;
}
