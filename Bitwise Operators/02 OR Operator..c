#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0, n2=0, OR=0;

    printf("\nEnter first number =");
    scanf("%d",&n1);

    printf("\nEnter second number =");
    scanf("%d",&n2);

    OR=n1|n2;

    printf("\n\n Or Bitwise Number Are : %d | %d = %d. \n", n1,n2,OR);

    getch();
    return 0;
}
