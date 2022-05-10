#include<stdio.h>
int main(){
    int n1, n2, n3;
   printf("Digite o Primero Numero\n");
    scanf("%d%*c",&n1);
    printf("Digite o Segundo Numero\n");
    scanf("%d%*c",&n2);
    printf("Digite o Terceiro Numero\n");
    scanf("%d%*c",&n3);
   if (n1 < n2 && n2 < n3)
    {
      printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
    }
  else if (n1 < n3 && n3 < n2)
    {
      printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
    }
  else if (n2 < n1 && n1 < n3)
    {
      printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
    }
  else if (n2 < n3 && n3 < n1) 
    {
      printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
    }
  else if (n3 < n1 && n1 < n2) 
    {
      printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
    }
  else 
    {
      printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
    }
    
}