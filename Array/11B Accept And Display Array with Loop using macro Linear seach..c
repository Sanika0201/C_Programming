#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int num[Size]={}, i=0, SearchEle=0;

    printf("\n Enter Elements in Array %d :- \n",Size);

    for(i=0;i<Size;i++)
    {
        printf("\n Enter The Element %d = ", i+1);
        scanf("%d",&num[i]);
    }
    getch();

    printf("\n Enter Element Of Array to be search :-");
    scanf("%d",&SearchEle);

    for(i=0; i<Size; i++)
    {
        if (num[i]==SearchEle)
        {
            break;
        }
    }

    if(i<Size)
    {
        printf("\n Given %d Element found in Location no. = %d.",SearchEle,i+1);
    }
        else
    {
        printf("\n Given %d Element not found in Array  = %d.",SearchEle);
    }

    getch();
    return 0;
}
