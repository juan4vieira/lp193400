/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Juan Mendes Vieira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1215
Data        : 18/06/2026
Objetivo    : distância entre 2 pontos
Aprendizado : <<<função double>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

    double x1, y1, x2, y2;

    if (scanf("%lf %lf", &x1, &y1) != 2) return 0;

    if (scanf("%lf %lf", &x2, &y2) != 2) return 0;

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4f\n", distancia);
    return 0;

}
