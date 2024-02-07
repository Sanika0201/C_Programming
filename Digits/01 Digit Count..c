#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0 ,Temp = 0, Dcount = 0;


    printf("\n\n Enter The Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dcount++;
        Temp = Temp / 10;
    }


    printf("\n\n Digits Count in %d = %d.", No, Dcount);

    getch();
    return 0;
}
