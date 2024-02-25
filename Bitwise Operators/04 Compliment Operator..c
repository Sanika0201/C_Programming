#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Num=0 ,Comp=0;

    printf("\n\n Enter The Number.=");
    scanf("%d",&Num);

    Comp=~Num;

    printf("\n\n Compliment Number is ~%d=%d",Num,Comp);

    getch();
    return 0;
}
