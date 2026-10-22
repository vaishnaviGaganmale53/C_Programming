//1. Accept one number and print that number of * on screen

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Write Updater
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>gcc program_1.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 12
// ************