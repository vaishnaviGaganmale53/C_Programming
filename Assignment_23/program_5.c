/*
5. Write a program which accept string from user and count number of white spaces

Input: "Marvellous"
Output:0
Input:
"Marvellous Infosystems"

Output:1

Input:
"Marvellous Infosystems by Piyush Manohar Khairnnar"

Output:5
*/


#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[200];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n", iRet);

    return 0;
}
