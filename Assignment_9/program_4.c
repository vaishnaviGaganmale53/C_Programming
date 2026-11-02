/*
4. Write a program to find odd factorial of given number.

Input: 5
Output: 15     (5*3*1)
Input: -5 5
Output: 15   (5*3*1)
Input: 10
Output: 945 (9*7*5*3*1)
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    int iFact = 1;
    for (int i = 1; i <= iNo; i += 2) {
        iFact *= i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}



/*

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>gcc program_4.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: 5
Odd Factorial of number is 15

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: 10
Odd Factorial of number is 945
*/