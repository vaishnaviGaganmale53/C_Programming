// 5- Check Divisibility by 5
// Problem Statement: Accept an integer and determine whether it is divisible by 5 without leaving any remainder
// Expected Output
// Input: 45 Divisible by 5
// Input 23 Not Divisible by 5

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}


// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_4>gcc program_5.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_4>Myexe.exe
// Enter a number: 45
// Divisible by 5
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_4>Myexe.exe
// Enter a number: 23
// Not Divisible by 5