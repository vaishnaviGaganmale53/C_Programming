/*
4. Write a program which accept number from user and return multiplication of all digits.

Input:2395
Output:270
Input:1018
Output: 8
Input:9440
Output:144
Input:922432
Output:864
*/


#include<stdio.h>

int MultDigits(int iNo)

{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // If digit is 0, multiplication becomes 0 unless ignored, but standard digit mult treats 0 as 0 or skips. Let's handle 0 correctly (if 0 is encountered, multiplication by 0 makes it 0, except if it's 9440 where 0 is ignored or part of product. Wait, for 9440 output is 144 which means 9 * 4 * 4 = 144, so 0 is ignored in multiplication or skipped when digit is 0). Let's skip 0 if it is 0.
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()

{

int iValue = 0;

int iRet = 0;

printf("Enter number"); scanf("%d", &iValue);

iRet = MultDigits(iValue);

printf("%d", iRet);

return 0;
}