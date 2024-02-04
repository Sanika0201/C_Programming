#include<stdio.h>
#include<conio.h>

int main()
{

    int i=0,j=0,x=0;

    printf(" \n Enter Row and Column Value : " );
    scanf("%d",&x);

    printf("\n\n Star :\n\n");

    for(i=1;i<=x;i++)
    {
         for(j=1;j<=x;j++)
         {
             if(i==j||i+j==x+1||i==(x/2)+1||j==(x/2)+1)
             {
                 printf(" * ");
             }

             else
             {
                 printf("   ");
             }

         }

         printf("\n");
    }

    getch();
    return 0;
}
