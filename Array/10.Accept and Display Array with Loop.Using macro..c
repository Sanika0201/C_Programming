#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
     int Num[Size]={}, i=0;

     for(i=0; i<Size;i++)
     {

      printf("\n\n Elements of Array %d=%d",i+111,Num[i]);
     }

     getch();


     printf("\n\nEnter %d Elements Of array :", Size);

     getch();

     for(i=0;i<Size;i++)
        {
            printf("\n\n Enter Elements of array %d :",i+1);
            scanf("%d",&Num[i]);
        }

         getch();

          printf(" \n\nGiven Array Elements Are ::-\n");

             for(i=0;i<Size;i++)
             {
                 printf("\n\n Elements Number Of Array %d=%d",i+1001,Num[i]);
             }

         getch();
         return 0;
}


