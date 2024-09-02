#include<stdio.h>
#include<math.h>
void main()
{   //Hexadecimal to Octal
    int n,ans=0;
    printf("Enter hexdec no.(only 0-9) ");
    scanf("%d",&n);
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        ans=ans+(digit*pow(16,i));      //dec
        n=n/10;
        i++;
    }

    int j=0,ans2=0;
    while(ans!=0)
    {
        int digit=ans%8;
        ans2=ans2+(digit*pow(10,j));
        ans=ans/8;
        j++;
    }
    printf("\n The octal no %d",ans2);
}