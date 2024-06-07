#include <stdio.h>
#include <stdlib.h>

/*
3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.
*/

float MEDIA(float nota1, float nota2, float nota3, char tipo){

    float media;

    switch (tipo){
    case 'A':
    case 'a':  
        media=(nota1 + nota2 + nota3)/3;
    break;

    case 'P':
    case 'p':
        media= ((nota1*5)+(nota2*3)+(nota3*2)) / 10; 
    break;

    case 'S':
    case 's':
        media= nota1 + nota2 + nota3;
    break;   
    default: 
        printf("comando invalido\n");
        break;
    } //switch (tipo)
    
    return media;
}

int main(){
    float n1, n2, n3;
    char opcao;
    float media;

    printf("Digite sua nota 1:\n");
    scanf("%f", &n1);
    setbuf(stdin, NULL);
    
    printf("Digite sua nota 2:\n");
    scanf("%f", &n2);
    setbuf(stdin, NULL);

    printf("Digite sua nota 3:\n");
    scanf("%f", &n3);
    setbuf(stdin, NULL);

    printf("Escolha uma opção:\n");
    printf("A: procedimento calcula a média aritmética das notas\n");
    printf("P: média ponderada (pesos: 5, 3 e 2)\n");
    printf("S: soma das notas\n");
    scanf("%c", &opcao);

    media = MEDIA(n1, n2, n3, opcao);//funcao MEDIA

    printf("A media é %.2f\n", media);


    return 0;
}
