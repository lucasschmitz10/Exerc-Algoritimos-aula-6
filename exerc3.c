#include<stdio.h>
int main(){
    int num1, num2;
    printf("Digito no primeiro numero\n");
    scanf("%d%*c",&num1);
    printf("Digite o segundo numero\n");
    scanf("%d%*c",&num2);
    if (num1 == num2){
        printf("Os numeros sao iguas");
    }
    else if(num1 > num2){
       printf("O maior numero é: %d\n",num1);
    }
    else{
        printf("O maior numero é: %d\n",num2);
    }
    
    
}