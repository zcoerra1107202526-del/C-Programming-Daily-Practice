#include<stdio.h>
void main()
{
    float kg, grams;

    clrscr();

    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    grams = kg * 1000;

    printf("Weight in grams = %.2f", grams);

    getch();
}
