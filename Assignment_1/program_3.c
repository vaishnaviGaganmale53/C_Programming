//3. Program to print numbers from 5 to 1 on screen
#include <stdio.h>

void Display()
{
    int i = 0;

    i = 5;

    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}


// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_1>gcc Program_3.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_1>Myexe.exe
// 5
// 4
// 3
// 2
// 1