/*
2. Write a program which accept string from user and count number of small characters.

Input:
"Marvellous"
Output: 9
*/


#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf(" %19[^\n]", arr);

    iRet = CountSmall(arr);

    printf("Number of small characters are %d\n", iRet);

    return 0;
}
