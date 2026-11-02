/*
5. Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

Input: 5
Output: 0.464515
Input: 7
Output: 0.650321
*/


#include <stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %lf\n", dRet);

    return 0;
}





/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>gcc program_5.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter area in square feet: 5
Area in square meters is: 0.464500

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter area in square feet: 7
Area in square meters is: 0.650300
*/