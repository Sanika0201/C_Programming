#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0, N2=0, sum = 0;

    printf("\nEnter First Number = ");
    scanf("%d",&N1);

    printf("\nEnter Second Number = ");
    scanf("%d",&N2);

    sum = N1 + N2;

    printf("\n\n Addition of Two Numbers : %d + %d = %d. \n", N1,N2,sum);

    getch();
    return 0;

}


