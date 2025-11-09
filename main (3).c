#include <stdio.h>

int main()
{
    float C, F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;
    printf("Fahrenheit = %.2f", F);
    return 0;
}