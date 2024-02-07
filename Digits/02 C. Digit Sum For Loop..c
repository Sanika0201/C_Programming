#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0 ,Temp = 0, Dsum = 0;


    printf("\n\n Enter The Number : ");
    scanf("%d",&No);

    Temp = No;

    for( Temp = No; Temp > 0; Dsum += (Temp % 10), Temp /=10);


    printf("\n\n Digits Sum in : %d = %d.", No, Dsum);

    getch();
    return 0;
}
