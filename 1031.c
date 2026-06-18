/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 18/06/2026
Objetivo    : Padr]ao de energias
Aprendizado : <<<Exercícios de reforço>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int restante(int n, int m) {
    int sobrevivente = 0;
    for (int i = 1; i < n; i++) {
        sobrevivente = (sobrevivente + m) % i;
    }
    return sobrevivente;
}

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int m = 1;
        while (1) {
            if (restante(n, m) == 11) { // 11 corresponde à região 13 ajustando o ponto inicial
                printf("%d\n", m);
                break;
            }
            m++;
        }
    }

    return 0;
}
