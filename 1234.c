/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Juan Mendes Vieira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 18/06/2026
Objetivo    : Sentença dançante
Aprendizado : <<<uso de strings>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    char sentenca[100];

    while (fgets(sentenca, sizeof(sentenca), stdin) != NULL) {
        int maiuscula = 1;

        for (int i = 0; sentenca[i] != '\0'; i++) {
            if (isalpha(sentenca[i])) {
                if (maiuscula) {
                    sentenca[i] = toupper(sentenca[i]);
                    maiuscula = 0;
                } else {
                    sentenca[i] = tolower(sentenca[i]);
                    maiuscula = 1;
                }
            }
        }
        printf("%s", sentenca);
    }

    return 0;
}
