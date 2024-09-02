#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 void game(char you,char comp){

    //draw

    if(you==comp)
    {
       printf("Match draw");
    }

    //values

    if(you=='t' && comp=='p') {

        printf("you lose \n");
    }
    else if(you=='p' && comp=='t') {

        printf("you win!! \n");
    }
    else if(you=='s' && comp=='t')
    {
        printf("you lose \n");
    }
    else if(you=='t' && comp=='s')
    {
        printf("you win!! \n");
    }
    else if(you=='s' && comp=='p')
    {
        printf("you win!! \n");
    }
    else if(you=='p' && comp=='s')
    {
        printf("you lose \n");
    }

    }
void main()
{
    char you,comp;
    srand(time(0));
    int num = rand()%100 + 1;

    if(num<33)
    {
        comp='s';
    }
    else if(num>33 && num<66)
    {
        comp='t';
    }

    else{
        comp='p';
    }

    printf("ENTER rock(t),paper(p),scissor(s)\n");
    scanf("%c",&you);
  
    printf("\n you chose %c and computer chose %c \n",you,comp);
    
  game(you,comp);
}