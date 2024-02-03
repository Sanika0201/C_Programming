#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 =0, N2 = 0;

    printf("\nEnter First Number = ");
    scanf("%d",&N1);

    printf("\nEnter Second Number = ");
    scanf("%d",&N2);

    if(N1==N2)
    {
        printf("\n Both Number Are same.");
    }
     else if(N1>N2)
     {
         printf("\n The Maximum Number is %d.",N1);
     }
    else
    {
        printf("\n The Minimum Number is %d.",N2);
    }
    getch();
    return 0;
}
