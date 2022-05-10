#include<stdio.h>
int main(){
    float n1, n2, soma, raiz, op;
    printf("MENU\n");
    printf("1-Somar dois Numeros\n");
    printf("2-Raiz Quadrada de um numero\n");
    printf("Escolha sua Opcao:\n");
    scanf("%f%*c",&op);
    if (op==1)
    {
        printf("Digite o Primeiro Numero\n");
        scanf("%f%*c",&n1);
        printf("Digite o Segundo Numero\n");
        scanf("%f%*c",&n2);
        soma=(n1+n2);
        printf("A Soma %.2f",soma);
    }
   else if (op==2)
    {
        printf(" Digite um valor:");
        scanf("%f%*c",&n1);
        raiz=(sqrt(n1));
        printf("A Raiz quadrada é%0.f",raiz);
    }
    else
    {
        printf("Opcao Invalida");
    }
    
}