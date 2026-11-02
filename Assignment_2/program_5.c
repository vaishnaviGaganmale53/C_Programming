//5. Accept number from user and check whether number is even or odd

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result
    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}



// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>gcc program_5.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 6
// Number is Even
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 11
// Number is Odd