/*
Q.1 Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI Radius * Radius)

Input: 5.3
Output: 88.2026
Input: 10.4
Output: 339.6224
*/

#include <stdio.h> 

#define PI 3.14

double CircleArea(float fRadius)
{
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}



/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>gcc program_1.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter radius: 5.3
Area of circle is: 88.202606

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter radius: 10.4
Area of circle is: 339.622375
*/