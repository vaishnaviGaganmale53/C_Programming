/*
1. Write a program which accept number from user and print that number of $ & on screen.

Input:5
Output: $ * $ * $ * $ * $
Input:3
Output: $ * $ * $ *
Input:-3
Output: $ * $ * $ *

*/


#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Handle negative numbers by converting them to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Print "$ *" for the given count
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}