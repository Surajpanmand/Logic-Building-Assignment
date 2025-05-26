////////////////////////////////////////////////////////////////////////
//
// file name   : assignment5.c
// description : print number of * on screen
// author      : suraj shivaji panmand
// date        : 12/05/2025
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void  accept(int iNo)
{
    int  iCnt = 0;
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
      printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    accept(iValue);
    return 0;
}