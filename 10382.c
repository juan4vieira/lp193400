/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/tournaments/rank/10382
Data        : 19/05/2026
Objetivo    : Vetores e Funções
Aprendizado : <<<Exercícios práticcos de aperfeiçoamento das funções e vetores>>>
-------------------------------------------------------------------------- */

Problema:
1017 - Gasto de Combustível

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

Problema: 
1046 - Tempo de Jogo


#include <stdio.h>

int calcularDuracao(int inicio, int fim) {
    if (fim > inicio) {
        return fim - inicio;
    } else {
        return 24 - inicio + fim;
    }
}

int main() {
    int inicio, fim;
    scanf("%d %d", &inicio, &fim);

    int duracao = calcularDuracao(inicio, fim);

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}

Problema:
1168 - LED

  #include <stdio.h>
#include <string.h>

int quantidadeLeds(char numero) {

    switch(numero) {
        case '1': return 2;
        case '2': return 5;
        case '3': return 5;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 3;
        case '8': return 7;
        case '9': return 6;
        case '0': return 6;
    }

    return 0;
}

int somarLeds(char numero[]) {

    int soma = 0;

    for(int i = 0; i < strlen(numero); i++) {
        soma += quantidadeLeds(numero[i]);
    }

    return soma;
}

int main() {

    int n;
    char numero[101];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        scanf("%s", numero);

        printf("%d leds\n", somarLeds(numero));
    }

    return 0;
}

Problema:
1179 - Preenchimento de Vetor IV

#include <stdio.h>

void imprimirPar(int par[]) {
    for(int j = 0; j < 5; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }
}

void imprimirImpar(int impar[]) {
    for(int j = 0; j < 5; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
}

void imprimirRestoImpar(int impar[], int i) {
    for(int j = 0; j < i; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
}

void imprimirRestoPar(int par[], int p) {
    for(int j = 0; j < p; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }
}

int main() {
    int x;
    int par[5], impar[5];
    int p = 0, i = 0;

    for(int k = 0; k < 15; k++) {
        scanf("%d", &x);

        if(x % 2 == 0) {
            par[p] = x;
            p++;

            if(p == 5) {
                imprimirPar(par);
                p = 0;
            }

        } else {
            impar[i] = x;
            i++;

            if(i == 5) {
                imprimirImpar(impar);
                i = 0;
            }
        }
    }

    imprimirRestoImpar(impar, i);
    imprimirRestoPar(par, p);

    return 0;
}
