#include<stdio.h>
int main()
{
    int a, b, c, I;
    printf("Digite um valor para A\n");
    scanf("%d%*c",&a);
    printf("Digite um valor para B\n");
    scanf("%d%*c",&b);
    printf("Digite um valor para C\n");
    scanf("%d%*c",&c);
    printf("Digite um valor para I(1,2,3))\n");
    scanf("%d%*c",&I);
    if(I==1){
     if (a<b && a<c)
      {
          printf("A ordem cresente dos Numeros e: %d, %d, %d\n",a, b, c);
      }
        else if (b<c)
        {
           printf("A ordem cresente dos Numeros e: %d, %d, %d\n", a, c, b);
        }
     if (b<a && b<c)
     {
        printf("A ordem cresente dos Numeros e: %d, %d, %d\n",b, a, c);
     }
     else if (a<c)
     {
        printf("A ordem cresente dos Numeros e: %d, %d, %d\n",b, c, a);
     }
     if (c<a && c<b)
     {
       printf("A ordem cresente dos Numeros e: %d, %d, %d\n",c, a, b);
     }
     else if (a<b)
     {
        printf("A ordem cresente dos Numeros e: %d, %d, %d\n",c, b, a);
     }
    }

    if (I==2)
    {
     if (a>b && a>c)
        {
         printf("A ordem decresente dos Numeros e: %d, %d, %d\n",a, b, c);
         }
     else if (b>c)
        {
         printf("A ordem decresente dos Numeros e: %d, %d, %d\n", a, c, b);
        }
     if (b>a && b>c)
        {
         printf("A ordem decresente dos Numeros e: %d, %d, %d\n",b, a, c);
        }
      else if (a>c)
        {
         printf("A ordem decresente dos Numeros e: %d, %d, %d\n",b, c, a);
        }
     if (c>a && c>b)
        {
         printf("A ordem decresente dos Numeros e: %d, %d, %d\n",c, a, b);
        }
     else if (a>b)
        {
         printf("A ordem decresente dos Numeros e: %d, %d, %d\n",c, b, a);
        }
    } 
   
   if (I==3)
     {
      if (a>b && a>c)
      {
          printf("A ordem desejada e: %d, %d, %d\n",b, a, c);
      }
        
     else if (b>a && b>c)
     {
        printf("A ordem desejada e: %d, %d, %d\n",a, b, c);
     }
     
     else if (c>a && c>b)
     {
       printf("A ordem desejada e: %d, %d, %d\n",a, c, b);
     }
    } 
}
