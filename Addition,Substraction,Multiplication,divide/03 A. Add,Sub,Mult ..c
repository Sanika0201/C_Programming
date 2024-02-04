#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0, N2=0, N3=0, N4=0, N5=0, sub = 0, mult = 0, sum = 0;

    printf("\nEnter First Number = ");
    scanf("%d",&N1);

    printf("\nEnter Second Number = ");
    scanf("%d",&N2);

    printf("\nEnter Third  Number = ");
    scanf("%d",&N3);

    printf("\nEnter Fourth Number = ");
    scanf("%d",&N4);

    printf("\nEnter Fifth Number = ");
    scanf("%d",&N5);

    sub = N1 - N2;
    sum = N3 + N4;
    mult= N2 * N5;

    printf("\n\n Substraction of  Numbers.   : %d - %d = %d. \n", N1,N2,sub);
    printf("\n\n Addition of Numbers.        : %d + %d = %d. \n", N3,N4,sum);
    printf("\n\n Multiplication of  Numbers. : %d * %d = %d. \n", N2,N5,mult);


    getch();
    return 0;

}
