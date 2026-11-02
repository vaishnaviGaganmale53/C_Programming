
/*
Write a program which accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it greater than 100 then print large.

Input: 75
Output: Medium
*/

#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if (iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Boundary value (50 or 100)\n");
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

/*

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>gcc program_1.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: 75
Medium
*/