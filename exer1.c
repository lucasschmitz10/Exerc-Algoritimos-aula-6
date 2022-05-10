#include <stdio.h>
int main (){
    float Trabalho, Avaliacao, Exame;
    printf(" digite o peso do Trabalho\n");
    scanf("%F%*c",&Trabalho);
    printf("Digite o peso da Avaliacao\n");
    scanf("%f%*c",&Avaliacao);
    printf("Digite o peso do Exame\n");
    scanf("%f%*c",&Exame);
    float media =(Trabalho*2+Avaliacao*3+Exame*5)/10;
    printf("sua é %.2f\n",media);
    if(media >=8){
        printf("Obteve Conceito A\n");
    }
    else if( media>= 7 && media <8){
        printf("Obteve Conceito B\n");
    }
    else if( media>= 6 && media <7){
        printf("Obteve Conceito C\n");
    }
    else if ( media>= 6 && media <6){
        printf("Obteve Conceito D\n");
    }
    else 
     printf("Obteve Conceito E\n");

}
 