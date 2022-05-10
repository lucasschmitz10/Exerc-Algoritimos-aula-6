#include<stdio.h>

int main(){

   int num;
     printf("Digite um Numero Inteiro:\n");
    scanf("%d%*c", &num);

   if(num % 2 == 0){
       printf("Numero Par\n");
    }
    else if(num % 2 == 1)
    {
       printf("Numero Impar\n");
    }
    
}