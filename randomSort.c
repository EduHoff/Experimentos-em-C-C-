#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



void imprimir(int* vetor, int intervalo){
    printf("\n\n");
    for(int i = 1; i<=intervalo; i++){
    printf("|%d| ", vetor[i]);
    }
}

int* alocaVetor(int tamanho){

    int* aux;

    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}


int randomSort(min, max){

    srand((unsigned)time(NULL));

    int i, aleatorio;
    int aux = min;

    int intervalo = max - min;
    int* vetor = alocaVetor(intervalo);

    intervalo++;

    for(i=0; i<=intervalo; i++){
        vetor[i] = 0;
    }
    imprimir(vetor, intervalo);



    for(i=min; i<=max; i++){

    while(aleatorio != aux){
    aleatorio = rand() % intervalo+1;
        vetor[i] = aleatorio;
        imprimir(vetor, intervalo);
    }

    if(aleatorio == aux){
        vetor[i] = aleatorio;
        //printf("valor de i: %d\n", i);
       // printf("%d!\n", vetor[i]);
        aux++;
        //imprimir(vetor, intervalo);
    }

    }

}


int main(){

    setlocale(LC_ALL, "Portuguese");

    int min, max;

    printf("Por favor, digite o valor mínimio do intervalo da lista:\n");
    printf("||");
    scanf("%d", &min);

    printf("Por favor, digite o valor máximo do intervalo da lista:\n");
    printf("||");
    scanf("%d", &max);


    randomSort(min, max);


    return 0;
}
