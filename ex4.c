#include <stdio.h>
#include <stdlib.h>

    /*
    4) Faça uma função que receba a média final de um aluno
    por parâmetro e retorne o seu conceito, conforme a tabela
    abaixo:
    */

   char CONCEITO(float media){

        if(media >=9 && media<=10){
            return 'A';
        }else{
            if(media >=7 && media < 9){
                return 'B';
            }else{
                if(media >=5 && media < 7){
                    return 'C';
                }else{
                    return 'D';      
                }
            }
        } //else 1
   }//funcao CONCEITO

int main(){

    char conceito;
    float media;
    printf("Digite a sua media\n");
    scanf("%f", &media);

    conceito = CONCEITO(media); //teste

    printf("Conceito %c\n", conceito);

    return 0;
}
