#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int result(int com,int usr);
int main()
{
    int chu,ch=0,coc;
    printf("\t\t!!! ROCK, PAPER, SCISSORS GAME !!!\n\n");
    do
    {
        printf("```````````OPTIONS````````````\n");
        printf("------------------------------\n");
        printf("|-----1 for ~~> Rock--------|\n");
        printf("|-----2 for ~~> Paper-------|\n");
        printf("|-----3 for ~~> Scissors----|\n");
        printf("------------------------------\n");
        coc=rand()%3;
        printf("The compuer has choosen now its your turn to choose!\n => ");
        scanf("%d",&chu);
        result(coc,chu);
        printf("\n\tIf you want to play again Enter 1\n => ");
        scanf("%d",&ch);
    }while(ch==1);
}

int result(int com,int usr)
{
    if(usr==com)
    {
        printf("Both have choosen Same thing\n");
    }
    else if(usr==1)
    {
        if(com==2)
        {
            printf("\t\t!! YOU LOOSE !!\n");
            printf("\tYou chose Rock and computer chose Paper");
        }
        else
        {
            printf("\t\t!! YOU WIN !!\n");
            printf("\tYou chose Rock and computer chose Scissors");
        }
    }
    else if(usr==2)
    {
        if(com==3)
        {
            printf("\t\t!! YOU LOOSE !!\n");
            printf("\tYou chose Paper and computer chose Scissors");
        }
        else
        {
            printf("\t\t!! YOU WIN !!\n");
            printf("\tYou chose Paper and computer chose Rock");
        }
    }
    else
    {
        if(com==1)
        {
            printf("\t\t!! YOU LOOSE !!\n");
            printf("\tYou chose Scissors and computer chose Rock");
        }
        else
        {
            printf("\t\t!! YOU WIN !!\n");
            printf("\tYou chose Scissors and computer chose Paper");
        }
    }
}
