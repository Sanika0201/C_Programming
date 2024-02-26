#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
    int Num=0,LShift=0;

    printf("\n\n Enter The Number =   ");
    scanf("%d",&Num);

    LShift=Num<<4;

     printf("\n\n Right Shift Bitwise Number Are : %d << 4  = %d",Num,LShift);

    getch();

    return 0;

}
