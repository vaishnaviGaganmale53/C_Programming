/*
3. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

Input: Q
Output: Q R S T U V W X Y z
Input: m
Output: m l k j i h g e d C b a
Input: 8
Output:
*/


#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
    }
    else
    {
        return;
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
