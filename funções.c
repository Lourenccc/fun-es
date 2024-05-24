#include <stdio.h>
#include <stdlib.h>

int preenche_vetor(int vetor[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("preencha o vetor\n");
        scanf("%i", &vetor[i]);
    }//vetor
    return;
}
int mostra_vetor(int vetor[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("%4i", vetor[i]);
    }
    printf("\n");
}


int main(){

    int vetor[5];
    preenche_vetor(vetor, 5);
    mostra_vetor(vetor, 5);

    int vetor2[10];
    preenche_vetor(vetor2, 10);
    mostra_vetor(vetor2, 10);


    return 0; 
}//main
