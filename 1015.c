/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mends Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 23/06/2026
Objetivo    : distancia entre os pontos
Aprendizado : <<<reforço de matrizes>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    double x1, y1;
    double x2, y2;
    double distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);

    return 0;
}
