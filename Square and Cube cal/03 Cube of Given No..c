#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int Num=0;
    int CubeRoot=0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    CubeRoot=Num*Num*Num;

    printf("\n\n The CUBE ROOT is : %d",CubeRoot);

    getch();
    return 0;
}
