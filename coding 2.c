
/* 
Name: maina prudence 
Reg No: CT100/G/30670/26
Date :23rd september 
Description: Prompting my data using C variable
*/

#include <stdio.h>

int main()
{
    float height;
    double bankBalance;
    char phoneNumber[11];

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance (KSh): ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%10s", phoneNumber);
    
    printf("Height %.f meters\n", height);
    printf("Bank Balance KSh %.f\n", bankBalance);
    printf("Phone Number %s\n", phoneNumber);

    return 0;
}