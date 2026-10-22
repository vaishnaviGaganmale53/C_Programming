// 4. 4. Accept one number and check whether it is divisible by 5 or not
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}



// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_1>Myexe.exe
// Enter number: 15
// Divisible by 5
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_1>Myexe.exe
// Enter number: 12
// Not Divisible by 5