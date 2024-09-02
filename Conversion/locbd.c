#include<stdio.h>
#include<math.h>
void main()
{   //binary to decimal
    int num,rem=0,dec=0,place=0;
    printf("Enter the binary no. ");
    scanf("%d",&num); 
    
    while(num!=0)
    {
        rem=num%10; 
        dec=dec+rem*pow(2,place);
        num=num/10;
        place++;
   
    }
    printf("Decimal no. of conversion is : %d",dec);
}