#include<stdio.h>
#include<math.h>
void main()
{   //octal to decimal
    int num,rem=0,dec=0,place=0;
    printf("Enter the octal no. ");
    scanf("%d",&num); 
    
    while(num!=0)
    {
        rem=num%10; //4
        dec=dec+rem*pow(8,place);
        num=num/10;
        place++;
   
    }
    printf("%d",dec);
}