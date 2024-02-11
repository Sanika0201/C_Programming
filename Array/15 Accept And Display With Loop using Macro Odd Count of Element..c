#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 4

int main()
{
    int num[Size]={}, i=0, SearchEle=0, OCount=0;

    printf("\n Enter Elements in Array %d :- \n",Size);

    for(i=0;i<Size;i++)
    {
        printf("\n Enter The Element %d = ", i+1);
        scanf("%d",&num[i]);
    }
    getch();


    for(i=0; i<Size; i++)
    {
        if(num[i]%2==1)
        {
            OCount++;
        }
    }


        printf("\n Odd Count in an Array. = %d.",OCount);


    getch();
    return 0;
}
