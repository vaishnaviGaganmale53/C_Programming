/*
5. Write a program which accept string from user and display it inn reverse order.

Input:
"Marvellous"

Output:
"SuollevraM"
*/


#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    iCnt--;

    while(iCnt >= 0)
    {
        printf("%c", str[iCnt]);

        iCnt--;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf(" %19[^\n]", arr);

    Reverse(arr);

    return 0;
}
