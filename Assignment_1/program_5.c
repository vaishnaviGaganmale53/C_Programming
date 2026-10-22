//5. Accept one number from user and print that number of * on screen
#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}



// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_1>gcc Program_5.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_1>Myexe.exe
// Enter number: 12
// ************