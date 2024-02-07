#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0, Temp=0, Dig=0, Ecount=0;

        printf("\n\n Enter The Number : ");
        scanf("%d",&No);

        Temp = No;

        while(Temp != 0)
        {
            Dig = Temp % 10;

            if( (Dig % 2) == 0 && Dig!=0)
            {
                Ecount++;
            }
                Temp = Temp / 10;
        }


    printf("\n\n  Even Digits sCount : %d = %d.", No, Ecount);

    getch();
    return 0;
}
