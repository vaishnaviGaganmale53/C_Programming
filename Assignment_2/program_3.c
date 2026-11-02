//3. Accept one number from user. If number is less than 10, print "Hello", otherwise print "Demo"
#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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


// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>gcc program_3.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 6
// Hello
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_2>Myexe.exe
// Enter number: 12
// Demo