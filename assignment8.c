////////////////////////////////////////////////////////////////////////
//
// file name   : assignment8.c
// description : used to calulate percentage
// author      : suraj shivaji panmand
// date        : 12/05/2025
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}