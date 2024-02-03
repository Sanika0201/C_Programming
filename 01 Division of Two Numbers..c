#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0, N2=0, div = 0;

    printf("\nEnter First Number = ");
    scanf("%d",&N1);
    printf("\nEnter Second Number = ");
    scanf("%d",&N2);

    div = N1 % N2;

    printf("\n\n Division of %d and %d is = %d. \n", N1,N2,div);

    getch();
    return 0;

}
