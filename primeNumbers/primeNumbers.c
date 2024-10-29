#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
    int* aux = (int*) malloc(tamanho * sizeof(int));
    return aux;
}

void vetorPrimos(int min, int max) {
    int intervalo = max - min + 1;
    int* numerosPrimos = alocaVetor(intervalo);
    int contadorPrimos = 0;

    system("cls");

    for (int i = min; i <= max; i++) {
        int divisores = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) { // � primo
            numerosPrimos[contadorPrimos++] = i;
        }
    }

    // Exibir os n�meros primos encontrados
    printf("N�meros primos no intervalo de %d a %d:\n", min, max);
    for (int i = 0; i < contadorPrimos; i++) {
        printf("%d ", numerosPrimos[i]);
    }
    printf("\n");

    system("pause");
    // Libera a mem�ria alocada
    free(numerosPrimos);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int min, max;

    printf("Digite o valor m�nimo do intervalo: ");
    scanf("%d", &min);
    printf("Digite o valor m�ximo do intervalo: ");
    scanf("%d", &max);

    vetorPrimos(min, max);

    return 0;
}
