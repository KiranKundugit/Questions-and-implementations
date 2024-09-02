#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{   //error
    int dec=0,oct[30],rem,i=0,length=0,n;
    char hexdec[10];
    printf("Enter the hexadecimal no. ");
    scanf("%s",&hexdec);
    hexdec[i]=n;
    while(n!=10)
    {
        length++;
        i++;
    }
    length--;
    i=0;
    while(length>=0)
    {
        rem=hexdec[length];
        if(rem>=48 && rem<=57)
        rem-=48;
        else if(rem>=65 && rem<=70)
        rem-=55;
        else if(rem>=97 && rem<=102)
        rem-=87;

        else{
            printf("The hexadecimal number entered is invalid ");

        }
    }

}