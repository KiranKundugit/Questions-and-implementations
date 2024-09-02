#include<stdio.h>
void main()
{   //correct
    int i,j=0;
    long decnum,quotient,rem;
    char hexnum[100];
    printf("Enter the decimal no. ");
    scanf("%d",&decnum);
    quotient=decnum;
    while(quotient!=0)
    {
        rem=quotient%16;
        if(rem<10)
        {
            hexnum[j++]=48+rem;
        }
        else{
            hexnum[j++]=55+rem;
        }
        quotient=quotient/16;
    }
    for(i=j;i>=0;i--)
    {
        printf("%c",hexnum[i]);
    }
}