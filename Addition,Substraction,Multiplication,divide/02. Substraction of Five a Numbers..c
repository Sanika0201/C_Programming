#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0, N2=0, N3=0, N4=0, N5=0, sub = 0;

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

    sub = N1 - N2 - N3 - N4 - N5;

    printf("\n\n Substraction of Five Numbers : %d - %d - %d - %d -%d = %d. \n", N1,N2,N3,N4,N5,sub);

    getch();
    return 0;

}
