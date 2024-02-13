#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

 int main()
 {
    int num[Size] = {},i=0, ECount=0, ZCount=0, OCount=0;


     printf("\n Enter Elements in Array %d :- \n",Size);

     for(i=0;i<Size;i++)
    {
        printf("\n Enter The Element %d = ", i+1);
        scanf("%d",&num[i]);
    }
    getch();


     for(i=0;i<Size;i++)
     {

        if(num[i]==0)
        {
            ZCount++;
        }

        else if(num[i]%2==1)
        {
            OCount++;
        }
        else
        {
            ECount++;
        }


    }

    printf("\n\n Even Element Count in Array is : %d",ECount);

    printf("\n\n Odd Element Count in Array is : %d",OCount);

    printf("\n\n Zero Element Count in Array is : %d",ZCount);

    getch();
    return 0;
 }
