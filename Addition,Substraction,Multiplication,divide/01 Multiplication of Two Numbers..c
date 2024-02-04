#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0, N2=0, mult = 0;

    printf("\nEnter First Number = ");
    scanf("%d",&N1);
    printf("\nEnter Second Number = ");
    scanf("%d",&N2);

    mult = N1 * N2;

    printf("\n\n Multiplication of %d and %d is = %d. \n", N1,N2,mult);

    getch();
    return 0;

}
