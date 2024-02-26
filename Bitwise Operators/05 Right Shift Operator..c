#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
    int num=0,R_Shift=0;

    printf("\n\n Enter The Number =");
    scanf("%d",&num);

    R_Shift=num>>3;

     printf("\n\n Right Shift Bitwise Number Are : %d >> 3  = %d",num,R_Shift);

    getch();

    return 0;

}
