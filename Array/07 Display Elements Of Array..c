#include<stdio.h>
#include<conio.h>

int main()

{
    int num[5]={};

    printf("\n***************************************");

    printf("\n\n Elements of an array 1 =%d.",num[0]);

    printf("\n\n Elements of an array 2 =%d.",num[1]);

    printf("\n\n Elements of an array 3 =%d.",num[2]);

    printf("\n\n Elements of an array 4 =%d.",num[3]);

    printf("\n\n Elements of an array 5 =%d.",num[4]);

    getch();

    printf("\n\n***************************************");

    num[0]= 17;
    num[2]= 647;
    num[1]= 9;
    num[3]= num[0]+76;
    num[2]+= 55;

    printf("\n\n Elements of an array 1 =%d.",num[0]);

    printf("\n\n Elements of an array 2 =%d.",num[1]);

    printf("\n\n Elements of an array 3 =%d.",num[2]);

    printf("\n\n Elements of an array 4 =%d.",num[3]);

    printf("\n\n Elements of an array 5 =%d.",num[4]);

    printf("\n\n***************************************\n\n");



    getch();

    return 0;

}


