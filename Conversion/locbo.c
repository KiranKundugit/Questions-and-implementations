#include<stdio.h>
void main()
{   //correct   Binary to Octal
    int rem,binaryno,octalno=0,decimalno=0,j=1,i=1;

    printf("Enter Binary number: ");
    scanf("%d",&binaryno);
    
    while(binaryno!=0)
    {
        rem=binaryno%10;
        decimalno=decimalno+rem*j;
        binaryno=binaryno/10;
        j=j*2;

    }
    while(decimalno!=0)
    {
        rem=decimalno%8;
        octalno=octalno+rem*i;
        decimalno=decimalno/8;
        i=i*10;
    }
    printf("octal no :  %d",octalno);
}