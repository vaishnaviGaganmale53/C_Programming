/*2. Write a program which accept number from user and check whether it contains 0 in it or not.

Input: 2395
Output: There is no Zero
Input:1018
Output: It Contains Zero
Input:9000
Output: It Contains Zero
Input:10687
Output: It Contains Zero
*/

#include<stdio.h>

#define TRUE 1

#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()

{

int iValue = 0;

BOOL bRet = FALSE;

printf("Enter number");

scanf("%d",&iValue);

bRet = ChkZero(iValue);

if(bRet == TRUE)

{

printf("It Contains Zero");

}

else

{

printf("There is no Zero");

}

return 0;

}


/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>gcc program_2.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>Myexe.exe
Enter number
2395
There is no Zero
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>Myexe.exe
Enter number
9000
It Contains Zero
*/