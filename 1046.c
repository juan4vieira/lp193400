/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Juan Mendes Vieira>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/tournaments/rank/10382
Data        : 19/05/2026
Objetivo    : Vetores e Funções
Aprendizado : <<<Exercícios práticcos de aperfeiçoamento das funções e vetores>>>
-------------------------------------------------------------------------- */
int main ()
{
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
