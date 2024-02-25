#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int N1=0,N2=0,XOR=0;

    printf("\n Enter The First Number. = ");
    scanf("%d",&N1);

    printf("Enter The Second Number. = ");
    scanf("%d",&N2);

    XOR=N1^N2;

    printf("\n\n XOR Bitwise Number Are : %d^%d=%d",N1,N2,XOR);

    getch();

    return 0;

}
