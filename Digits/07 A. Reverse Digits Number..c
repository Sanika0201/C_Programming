#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0 ,Temp = 0, Rev = 0, Dig=0;


    printf("\n\n Enter The Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp!=0)
    {
        Dig=Temp%10;
        Rev=(Rev*10+(Dig));
        Temp = Temp / 10;
    }


    printf("\n\n Reverse Number are : %d = %d.", No, Rev);

    getch();
    return 0;
}
