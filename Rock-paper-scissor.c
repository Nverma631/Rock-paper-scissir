//we assume 0 for rock,1 for paper and 2 for scissor;
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int usrchoice,cmpchoice;
    clrscr();
    cmpchoice=rand()%3;
    printf("\n Computer-choice=%d",cmpchoice);
    printf("\n random Number:%d",rand());
    printf("\n Enter-number:");
    printf("\n 0 for rock");
    printf("\n 1 for paper");
    printf("\n 2 for scissor");
    scanf("\n%d",&usrchoice);
    if(usrchoice==cmpchoice)
    {
        printf("\n Game is draw!both choose same");
    }
    if(usrchoice==0)//rock
    {
        if(cmpchoice==1)//paper
            printf("\n Computer win,I choose-rock and Computer choose- paper");
        if(cmpchoice==2)
            printf("\n User win,I choose-rock and Computer choose-  scissor");
    }
    if(usrchoice==1)//paper
    {
        if(cmpchoice==0)//rock
            printf("\n user win,I choose-paper and Computer choose-  rock");
        if( cmpchoice==2)
            printf("\n computer win,I choose-paper and Computer choose- scissor");
    }
    if(usrchoice==2)//scissor
    {
        if(cmpchoice==0)//rock
            printf("\n Computer win,I choose- Scissor and Computer choose- rock");
        if(cmpchoice==1)
            printf("\n user win,I choose-scissor and Computer choose- paper");

    }
    if(usrchoice>2)
        printf("\n Choose either 0, 1 and 2");

    getch();
    return 0;
}
