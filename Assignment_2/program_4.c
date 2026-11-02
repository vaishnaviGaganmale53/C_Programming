//4. Accept two numbers and display the first number, the number of times specified by the second number.
#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}


// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>gcc program_4.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 5
// Enter frequency: 2
// 5
// 5