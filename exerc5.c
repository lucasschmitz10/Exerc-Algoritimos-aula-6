#include<stdio.h>
int main(){
    int n1, n2, n3, n4;
    printf("Escreva Tres numeros em ordem crescente\n");
    scanf("%d%*c",&n1);
    scanf("%d%*c",&n2);
    scanf("%d%*c",&n3);
    printf("Digite um numero(Fora de ordem)\n");
    scanf("%d%*c",&n4);
    if (n4>n3)
    {
       printf("A Ordem crescente e: %d %d %d %d \n", n4, n3, n2, n1);
    }
    else if ( n4>n2 && n4<n3){
       printf("A Ordem crescente e: %d %d %d %d \n", n3, n4, n2, n1);
    }
    else if (n4>n1 && n4<n2)
    {
        printf("A Ordem crescente e: %d %d %d %d \n", n3, n2, n4, n1);
    }
    else
    {
        printf("A Ordem crescente e: %d %d %d %d \n", n3, n2, n1, n4);
    }
}