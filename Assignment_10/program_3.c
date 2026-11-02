/*
3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre 1000 Meter)

Input: 5
Output: 5000
Input: 12
Output: 12000
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is: %d\n", iRet);

    return 0;
}


/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>gcc program_3.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter distance in KM: 5
Distance in meters is: 5000

C:\Users\gagan\OneDrive\Desktop\Logic_Building_Assignments\C_Programming\Assignment_10>Myexe.exe
Enter distance in KM: 12
Distance in meters is: 12000
*/