/*
2. Accept single digit number from user and print it into word.

Input: 9
Output: Nine
Input: -3
Output: Three
Input: 12
Output: Invalid Number
*/

#include <stdio.h>

void Display(int iNo)
{
    // Handle negative single digits by taking absolute value
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid Number\n");
            break;
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

/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>gcc program_2.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: 9
Nine

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_8>Myexe.exe
Enter number: -3
Three
*/