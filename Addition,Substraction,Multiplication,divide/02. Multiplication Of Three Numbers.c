#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0, N2=0, N3=0, mult = 0;

    printf("\nEnter First Number = ");
    scanf("%d",&N1);

    printf("\nEnter Second Number = ");
    scanf("%d",&N2);

    printf("\nEnter Third Number = ");
    scanf("%d",&N3);

    mult = N1 * N2 * N3;

    printf("\n\n Multiplication of Three Numbers : %d * %d * %d is = %d. \n", N1,N2,N3,mult);

    getch();
    return 0;

}
