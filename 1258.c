/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 02/06/2026
Objetivo    : critérios de camisetas
Aprendizado : <<<Uso de Srucs>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;

int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    int comp_cor = strcmp(c1->cor, c2->cor);
    if (comp_cor != 0) {
        return comp_cor;
    }

    if (c1->tamanho != c2->tamanho) {
        return c2->tamanho - c1->tamanho;
    }

    return strcmp(c1->nome, c2->nome);
}

int main() {
    int N;
    int primeiro_caso = 1;
    Camiseta camisetas[65];

    while (scanf("%d", &N) == 1 && N != 0) {
        getchar();

        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;

        for (int i = 0; i < N; i++) {
            fgets(camisetas[i].nome, sizeof(camisetas[i].nome), stdin);
            camisetas[i].nome[strcspn(camisetas[i].nome, "\n")] = '\0';

            scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
            getchar();
        }

        qsort(camisetas, N, sizeof(Camiseta), comparar);

        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n", camisetas[i].cor, camisetas[i].tamanho, camisetas[i].nome);
        }
    }

    return 0;
}
