 #include<stdio.h>
 #include<conio.h>

 int main()
 {
    int No=0,Temp=0, Dig=0, ZCount=0, ECount=0, OCount=0;

    printf("\n\n Enter a Number :");
    scanf("%d",&No);

    Temp=No;

    while(Temp!=0)
    {
        Dig=Temp%10;

        if(Dig==0)
        {
            ZCount++;
        }

        else if(Dig%2==1)
        {
            OCount++;
        }
        else
        {
            ECount++;
        }

        Temp=Temp/10;
    }

    printf("\n\n Even Digits Count is : %d=%d.",No,ECount);

    printf("\n\n Odd Digits Count is : %d=%d.",No,OCount);

    printf("\n\n Zero Digits Count is : %d=%d.",No,ZCount);

    getch();
    return 0;
 }
