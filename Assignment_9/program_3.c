/*
3. Write a program to find even factorial of given number.

Input:5
Output: 8 (4*2)
Input: -5
Output: 8   (4*2)
Input: 10
Output:  3840   (10*8*6*4*2)
*/
#include <stdio.h>

int EvenFactorial(int iNo)
{
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    int iFact = 1;
    for (int i = 2; i <= iNo; i += 2) {
        iFact *= i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}



/*
:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>gcc program_3.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: 5
Even Factorial of number is 8

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: -5
Even Factorial of number is 8

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number: 10
Even Factorial of number is 3840
*/