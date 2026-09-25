#include<stdio.h>

void main()
{
    float distance, time, speed;

    clrscr();

    printf("Enter distance: ");
    scanf("%f",&distance);

    printf("Enter time: ");
    scanf("%f",&time);

    speed = distance / time;

    printf("Speed = %.2f",speed);

    getch();
}
