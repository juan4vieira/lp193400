/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 05/05/2026
Objetivo    : Criptografia
Aprendizado : <<<Práticas de String>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    char s[1005];

    while (N--) {
        fgets(s, sizeof(s), stdin);

        int len = strlen(s);
        if (s[len - 1] == '\n') {
            s[len - 1] = '\0';
            len--;
        }

        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z')) {
                s[i] += 3;
            }
        }

        for (int i = 0; i < len / 2; i++) {
            char tmp = s[i];
            s[i] = s[len - i - 1];
            s[len - i - 1] = tmp;
        }

        for (int i = len / 2; i < len; i++) {
            s[i] -= 1;
        }

        printf("%s\n", s);
    }

    return 0;
}
