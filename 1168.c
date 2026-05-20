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
