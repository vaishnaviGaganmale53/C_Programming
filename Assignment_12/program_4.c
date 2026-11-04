/*
4. Write a program which accept number from user and count frequency of 4 in it.

Input:2395
Output: 0
Input: 1018
Output: 0
Input: 9440
Output: 2
Input: 922432
Output: 1
*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main() {

int iValue = 0; int iRet = 0;

printf("Enter number"); scanf("%d",&iValue);

iRet = CountFour(iValue);

printf("%d", iRet);

return 0;

}


/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>gcc program_4.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>Myexe.exe
Enter number
2395
0
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>Myexe.exe
Enter number
9440
2
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_12>Myexe.exe
Enter number
922432
1

*/