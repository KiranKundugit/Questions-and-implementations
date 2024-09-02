#include<stdio.h>
#include<math.h>
void main()
{   //hex to dec
    int num,rem=0,dec=0,place=0,n;
    printf("Enter the Hexadecimal no. ");
    scanf("%d",&num); 
   
    while(num)
    {
        rem=num%10; 
        dec=dec+rem*pow(16,place);
        num=num/10;
        place++;
   
    }
    printf("Decimal no. %d",dec);
}