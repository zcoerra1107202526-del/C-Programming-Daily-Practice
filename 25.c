#include<stdio.h>


void main()
{
    float speed, time, distance;
clrscr();


    printf("Enter speed: ");
    scanf("%f",&speed);

    printf("Enter time: ");
    scanf("%f",&time);

    distance = speed * time;

    printf("Distance = %.2f",distance);
getch();
 
}
