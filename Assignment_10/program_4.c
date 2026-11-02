/*
4. Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius (Fahrenheit -32)* (5/9))

Input: 10
Output: 12.2222 (1032) (5/9)
Input: 34
Output: 1.11111 (3432)* (5/9)
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32.0) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %lf\n", dRet);

    return 0;
}






/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>gcc program_4.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter temperature in Fahrenheit: 10
Temperature in Celsius is: -12.222222

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter temperature in Fahrenheit: 34
Temperature in Celsius is: 1.111111
*/