#include <stdio.h>
#include <stdlib.h>


/*
2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.

Para homens: (72.7 * altura) - 58
Para mulheres: (62.1 * altura) - 44.7
*/

float PesoIdeal(float altura, char sexo){
    float ideal;

    if(sexo == 'H' || sexo == 'h'){

        ideal = (72.7 * altura) - 58.0;

    }else{
        if(sexo == 'm' || sexo == 'M'){

            ideal = (62.1 * altura) - 44.7;
        }else{
            printf("Você digitou um sexo invalido\n");
        }
    }//else1
    return ideal;
}//função

int main(){

    char sexo;
    float altura;
    float ideal;

    printf("Digite o seu sexo (H para homem / M para mulher)\n");
    scanf("%c", &sexo);

    printf("Digite a sua altura\n");
    scanf("%f", &altura);

    ideal = PesoIdeal(altura, sexo);

    printf("O peso seu peso ideal é %.2fKG\n", ideal);


    return 0;
}// main
