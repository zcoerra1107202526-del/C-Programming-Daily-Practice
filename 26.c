#include<stdio.h>


void main()
{
    float voltage, current, power;

clrscr();

    printf("Enter voltage: ");
    scanf("%f",&voltage);

    printf("Enter current: ");
    scanf("%f",&current);

    power = voltage * current;

    printf("Power = %.2f W",power);
getch();
    
}
