// 4-Check Divisibility by 3 and 5
// Problem Statement. Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5. or neither.
// Expected Output:
// Input: 15-Divisible by Both
// Input: 9 Divisible by 3 Only
// Input 10 Divisible by 5 Only
// Input: 7 Not Divisible by Either

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}





// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>gcc program_4.c -o Myexe.exe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter number: 15
// Divisible by Both
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter number: 9
// Divisible by 3 Only
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter number: 10
// Divisible by 5 Only
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_5>Myexe.exe
// Enter number: 7
// Not Divisible by Either