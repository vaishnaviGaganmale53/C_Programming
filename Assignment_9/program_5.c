/*
5. Write a program which returns difference between Even factorial and odd factorial of given number.

Input: 5
Output: -7  5   (8-15)
Input: -5
Output : -7 (8-15)
Input: 10
Output: 2895   (3840-945)
*/

#include <stdio.h>

int EvenFactorial(int iNo) {
    if (iNo < 0) iNo = -iNo;
    int iFact = 1;
    for (int i = 2; i <= iNo; i += 2) {
        iFact *= i;
    }
    return iFact;
}

int OddFactorial(int iNo) {
    if (iNo < 0) iNo = -iNo;
    int iFact = 1;
    for (int i = 1; i <= iNo; i += 2) {
        iFact *= i;
    }
    return iFact;
}

int FactorialDiff(int iNo)
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}





/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>gcc program_5.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: 5
Factorial difference is -7

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: 10
Factorial difference is 2895.
*/