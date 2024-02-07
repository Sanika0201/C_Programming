#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0 ,Temp = 0, Zcount = 0, Dig = 0;


    printf("\n\n Enter The Number : ");
    scanf("%d",&No);

    Temp = No;

    do
    {
        if(Temp % 10 == 0)
        {
            Zcount++;
        }


    Temp=Temp/10;
    }
        while(Temp!=0);


    printf("\n\n Zero Count Digits : %d = %d.", No, Zcount);

    getch();
    return 0;
}
