/*
2. Accept amount in US dollar and return its corresponding value in Indian
 currency. Consider 1$as 70 rupees.

Input 10
Output: 700
Input: 3
Output:270
Input:1200
Output: 84000
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}



/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>gcc program_2.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number of USD: 10
Value in INR is 700

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number of USD: 3
Value in INR is 210

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_9>Myexe.exe
Enter number of USD: 1200
Value in INR is 84000
*/