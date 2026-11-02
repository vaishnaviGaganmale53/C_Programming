// 5- Identify Character Type
// Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase aiphabet, digit, or special character. Use character comparisons without using library character-classification functions.
// Expected Output
// Input: A→ Uppercase Alphabet
// input: m Lowercase Alphabet
// Input 7 Digit
// Input Special Character

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}


// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>gcc program_5.c -o Myexe.exe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter a character: A
// Uppercase Alphabet
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter a character: m
// Lowercase Alphabet
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter a character: 7
// Digit