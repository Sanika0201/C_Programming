#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0, Temp=0, Ocount=0, Dig=0;

        printf("\n\n Enter The Number : ");
        scanf("%d",&No);

        Temp = No;

        while(Temp != 0)
        {
            Dig = Temp % 10;

            if( (Dig % 2) == 1)
            {
                Ocount++;
            }
                Temp = Temp / 10;
        }


    printf("\n\n Odd Count Digits : %d = %d.", No, Ocount);

    getch();
    return 0;
}
