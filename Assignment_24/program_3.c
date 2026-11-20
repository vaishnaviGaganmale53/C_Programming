/*

3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input:
"Marvellous Multi OS" M
Output: 0
Input:
"Marvellous Multi OS"
w
Output:
-1
Input:
"Marvellous Multi OS"
e
Output:
4
*/


#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf(" %19[^\n]", arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
