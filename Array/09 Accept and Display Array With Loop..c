#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    int Num[4]={},i=0;

    for(i=0;i<4;i++)
    {
        printf("\n\n Elements of Array %d=%d",i+111,Num[i]);
    }

    getch();


    printf("\n\nEnter 4 Elements Of Array :");

     getch();

    for(i=0;i<4;i++)
    {
        printf("\n\n Enter Elements of Array %d :",i+1);
        scanf("%d",&Num[i]);
    }

    getch();

     printf("\nGiven Array Elements Are ::-\n\n ");

     for(i=0;i<4;i++)
     {
         printf("\n\n Elements Number Of Array %d=%d",i+1001,Num[i]);
     }

     getch();
     return 0;
}
