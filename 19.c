#include<stdio.h>
void main()
{
    float height, weight;

    clrscr();

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("\nHeight = %.2f", height);
    printf("\nWeight = %.2f", weight);

    getch();
}
