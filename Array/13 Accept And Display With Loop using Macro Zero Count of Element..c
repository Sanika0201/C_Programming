#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 4

int main()
{
    int num[Size]={}, i=0, SearchEle=0, ZCount=0;

    printf("\n Enter Elements in Array %d :- \n",Size);

    for(i=0;i<Size;i++)
    {
        printf("\n Enter The Element %d = ", i+1);
        scanf("%d",&num[i]);
    }
    getch();


    for(i=0; i<Size; i++)
    {
        if(num[i]==0)
        {
            ZCount++;
        }
    }


        printf("\n Zero Count in an Array. = %d.",ZCount);


    getch();
    return 0;
}
