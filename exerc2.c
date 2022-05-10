#include<stdio.h>
int main(){
    float nota1, nota2, nota3, notatirar;
    printf("digite a nota1");
    scanf("%f%*c",&nota1);
    printf("Digite a nota2");
    scanf("%f%*c",&nota2);
    printf("DIgite a nota3");
    scanf("%f%*c",nota3);
    float media=(nota1+nota2+nota3);
    printf("Media Aritimetica : %.2f/n",media);
    notatirar =(12- media);
    if (media>= 0 && media <3){
        printf("Reprovado");
    }
    else if (media >= 3 && media <7){
        printf("Exame");
        printf("Deve tirar nota %.2f",notatirar);
    }
    else{
        printf("Aprovado");
     }
}

