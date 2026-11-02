// 4 Check Triangle Validity

// Problem Statement: Accept three integer values representing the lengths of the sides of a triangle. Determine whether they can form a valid triangle. All sides must be positive, and the sum of any two sides must be greater than the third side.

// Expected Output:

// Input: 345 Valid Triangle

// Input: 123→ Invalid Triangle

// Input: 045 Invalid Triangle

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
       iSide1 + iSide2 > iSide3 &&
       iSide1 + iSide3 > iSide2 &&
       iSide2 + iSide3 > iSide1)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}



// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_6>gcc program_4.c -o Myexe.exe

// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_6>Myexe.exe
// Enter three sides: 3 4 5
// Valid Triangle
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_6>Myexe.exe
// Enter three sides: 1 2 3
// Invalid Triangle
// C:\Users\gagan\OneDrive\Desktop\LB\C_Programing_assingments\Assignment_6>Myexe.exe
// Enter three sides: 0 4 5
// Invalid Triangle