////////////////////////////////////////////////////////////////////////
//
// file name   : assignment7.c
// description :  print number of * on screen
// author      : suraj shivaji panmand
// date        : 12/05/2025
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Write updater
    while(iNo > iCnt)
    {
        printf("*");
        iNo--;      
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}