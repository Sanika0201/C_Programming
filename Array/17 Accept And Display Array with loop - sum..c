#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int num[Size]={},i=0,sum=0;

    printf("\n Enter Elements in array :\n",Size);

    for(i=0; i<Size; i++)
    {
        printf("\n Enter Elements %d in array =",i+1);
        scanf("%d",&num[i]);

        sum= sum+num[i];

    }

    getch();

    printf("\n sum of array:");

    for(i=0; i< Size; i++)
    {
        printf("%d+",num[i]);
    }

    printf("\b=%d.",sum);

    getch();
    return 0;
}
