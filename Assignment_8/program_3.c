/*
3. Write a program to find factorial of given number.

Input: 5
Output:120    (5*4*3*2*1)
Input:-5
Output: 120   (5*4*3*2*1)
Input: 4
Output:24    (4*3*2*1)
*/

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    // Handle negative input as per test case (-5 -> 120)
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}




/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>gcc program_3.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: 5
Factorial of number is 120

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: -5
Factorial of number is 120
*/