/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 29/04/2026
Objetivo    : Entrada e saída de números reais
Aprendizado : <<<aplicação direta de printf e dos demais comandos. exercício de fixação>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    float A, B;
    double C, D;

    scanf("%f %f", &A, &B);
    scanf("%lf %lf", &C, &D);

    printf("A = %.6f, B = %.6f\n", A, B);
    printf("C = %.6lf, D = %.6lf\n", C, D);

    printf("A = %.1f, B = %.1f\n", A, B);
    printf("C = %.1lf, D = %.1lf\n", C, D);

    printf("A = %.2f, B = %.2f\n", A, B);
    printf("C = %.2lf, D = %.2lf\n", C, D);

    printf("A = %.3f, B = %.3f\n", A, B);
    printf("C = %.3lf, D = %.3lf\n", C, D);

    printf("A = %.3E, B = %.3E\n", A, B);
    printf("C = %.3E, D = %.3E\n", C, D);

    printf("A = %.3e, B = %.3e\n", A, B);
    printf("C = %.3e, D = %.3e\n", C, D);

    printf("A = %d, B = %d\n", (int)A, (int)B);
    printf("C = %d, D = %d\n", (int)C, (int)D);

    return 0;
}
