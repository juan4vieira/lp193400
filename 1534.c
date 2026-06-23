/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 23/06/2026
Objetivo    : aleração de caractéres
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------
1534.c com operador
  --------------------------------------------------------------------------*/
#include <stdio.h>

void str_tolower(const char *src, char *dst) {
    int i = 0;
    while (src[i] != '\0') {include <string.h>
#include <ctype.h>
        dst[i] = tolower((unsigned char)src[i]);
        i++;
    }
    dst[i] = '\0';
}

int main() {
    char tag[20];
    char num_str[20];
    char texto[1005];
    char tag_lower[20];

    while (fgets(tag, sizeof(tag), stdin)) {
        tag[strcspn(tag, "\r\n")] = '\0';
        if (!fgets(num_str, sizeof(num_str), stdin)) break;
        num_str[strcspn(num_str, "\r\n")] = '\0';
        if (!fgets(texto, sizeof(texto), stdin)) break;
        texto[strcspn(texto, "\r\n")] = '\0';

        str_tolower(tag, tag_lower);
        int len_tag = strlen(tag_lower);
        int dentro_tag = 0;
        int i = 0;

        while (texto[i] != '\0') {
            if (texto[i] == '<') {
                dentro_tag = 1;include <string.h>
#include <ctype.h>
                putchar(texto[i]);
                i++;
                continue;
            } else if (texto[i] == '>') {
                dentro_tag = 0;
                putchar(texto[i]);
                i++;
                continue;
            }

            if (dentro_tag) {
                int match = 1;
                for (int j = 0; j < len_tag; j++) {
                    if (texto[i + j] == '\0' || tolower((unsigned char)texto[i + j]) != tag_lower[j]) {
                        match = 0;
                        break;
                    }
                }
                if (match) {
                    printf("%s", num_str);
                    i += len_tag;
                } else {
                    putchar(texto[i]);
                    i++;
                }
            } else {
                putchar(texto[i]);
                i++;
            }
        }
        putchar('\n');
    }
    return 0;
}

*------------------------------------------------------------------------------------------------------------------
1534.c sem operador
--------------------------------------------------------------------------------------------------------------------*
  #include <stdio.h>

void str_tolower_ptr(const char *src, char *dst) {
    while (*src != '\0') {
        *dst = tolower((unsigned char)*src);
        src++;
        dst++;
    }
    *dst = '\0';
}

int main() {
    char tag[20];
    char num_str[20];
    char texto[1005];
    char tag_lower[20];

    while (fgets(tag, sizeof(tag), stdin)) {
        tag[strcspn(tag, "\r\n")] = '\0';
        if (!fgets(num_str, sizeof(num_str), stdin)) break;
        num_str[strcspn(num_str, "\r\n")] = '\0';
        if (!fgets(texto, sizeof(texto), stdin)) break;
        texto[strcspn(texto, "\r\n")] = '\0';

        str_tolower_ptr(tag, tag_lower);
        int len_tag = strlen(tag_lower);
        int dentro_tag = 0;
        char *p = texto;

        while (*p != '\0') {
            if (*p == '<') {
                dentro_tag = 1;
                putchar(*p);
                p++;
                continue;
            } else if (*p == '>') {
                dentro_tag = 0;
                putchar(*p);
                p++;
                continue;
            }

            if (dentro_tag) {
                int match = 1;
                for (int j = 0; j < len_tag; j++) {
                    if (*(p + j) == '\0' || tolower((unsigned char)*(p + j)) != *(tag_lower + j)) {
                        match = 0;
                        break;
                    }
                }
                if (match) {
                    printf("%s", num_str);
                    p += len_tag;
                } else {
                    putchar(*p);
                    p++;
                }
            } else {
                putchar(*p);
                p++;
            }
        }
        putchar('\n');
    }
    return 0;
}
