//2. Accept one number and print that number of * on screen using a while loop
#include <stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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


// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>gcc program_2.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 5
// *****