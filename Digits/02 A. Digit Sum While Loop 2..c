#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0 ,Temp = 0, Dsum = 0, Dig = 0;


    printf("\n\n Enter The Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dsum = Dsum + Temp % 10;
        Temp = Temp / 10;
    }


    printf("\n\n Digits Sum in : %d = %d.", No, Dsum);

    getch();
    return 0;
}
