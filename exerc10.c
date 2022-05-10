#include<stdio.h>
int main(){
    int d1, m1,a1, d2, m2, a2;
    printf("Digite a Primeira data\n");
    printf("DIA(dd):\n");
    scanf("%d%*c",&d1);
    printf("MES(mm):\n");
    scanf("%d%*c",&m1);
    printf("ANO(aaaa):\n");
    scanf("%d%*c",&a1);
    printf("Digite a Segunda data\n");
     printf("DIA(dd):\n");
    scanf("%d%*c",&d2);
    printf("MES(mm):\n");
    scanf("%d%*c",&m2);
    printf("ANO(aaaa):\n");
    scanf("%d%*c",&a2);
    if (a1>a2)
    {
       printf("A maior Data e: %d/%d/%d",d1, m1, a1);
       
    }
     else if (a2>a1)
    {
       printf("A maior Data e: %d/%d/%d",d2, m2, a2);
    }
    else if (m1>m2)
    {
       printf("A maior Data e: %d/%d/%d",d1, m1, a1);
    }
     else if (m2>m1)
      {
       printf("A maior Data e: %d/%d/%d",d2, m2, a2);
    }
    else if (d1>d2)
      {
       printf("A maior Data e: %d/%d/%d",d1, m1, a1);
    }
    else 
     {
       printf("A maior Data e: %d/%d/%d",d2, m2, a2);
    }
}