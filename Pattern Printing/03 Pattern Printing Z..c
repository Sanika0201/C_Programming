#include<stdio.h>
#include<conio.h>

int main()
{

    int i=0,j=0,x=0;

    printf("\nEnter Row and Column Value : ");
    scanf("%d",&x);

    printf("\n\n Pattern is : \n\n");

    for(i=1;i<=x;i++)
    {
         for(j=1;j<=x;j++)
         {
             if(i==1||i==x||i+j==x+1)
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
