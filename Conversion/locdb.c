#include<stdio.h>
#include<stdlib.h>
void main()
{   //decimal to binary
    int a[10],n,i;
    system("cls");

    printf("Enter the Decimal no. to convert: ");
    scanf("%d",&n);

    for(i=0;n>0;i++)
   {    a[i]=n%2;   //4/2=0
        n=n/2;      //2
   }
   printf("Binary of given no. is = ");

   for(i=i-1;i>=0;i--)
   {
    printf("%d",a[i]); 
   }

}