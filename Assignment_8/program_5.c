/*
5. Write a program which accept number from user and display its table in reverse order.



Input: 2
Output: 20 18 16 14 12 10 8 6 4 2
Input: 5
Output: 50 45 40 35 30 25 20 15 10 5
Input: -5
Output: 50 45 40 35 30 25 20 15 10 5

*/

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}


/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>gcc program_5.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: 2
20 18 16 14 12 10 8 6 4 2

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: 5
50 45 40 35 30 25 20 15 10 5
*/