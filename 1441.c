/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 26/05/2026
Objetivo    : ler o maior número
Aprendizado : <<<uso de recursões>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int h;

    // Executa o loop lendo o valor de H. O loop para quando H for 0.
    while (scanf("%d", &h) == 1 && h != 0) {
        int maior = h; // Inicializa o maior valor com o próprio termo inicial

        // Gera a sequência até que h se torne 1
        while (h > 1) {
            if (h % 2 == 0) {
                h = h / 2;       // Se for par: h / 2
            } else {
                h = 3 * h + 1;   // Se for ímpar: 3 * h + 1
            }

            // Atualiza o maior valor encontrado até agora
            if (h > maior) {
                maior = h;
            }
        }

        // Imprime o maior elemento da sequência para o caso de teste atual
        printf("%d\n", maior);
    }

    return 0;
}
