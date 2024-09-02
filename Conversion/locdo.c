#include<stdio.h>
#include<stdlib.h>
void main()
{  //correct   Decimal to Octal
   int a[10],n,i;
    system("cls");
    printf("Enter the Decimal no. to convert");
    scanf("%d",&n);
    for(i=0;n>0;i++)
   { a[i]=n%8;  //4/2=0
    n=n/8;  //2
   }
   printf("Octal of given no. is= ");
   for(i=i-1;i>=0;i--)
   {
    printf("%d",a[i]); 
   }

}