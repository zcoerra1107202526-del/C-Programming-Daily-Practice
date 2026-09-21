#include<stdio.h>
void main()
{
    float r,area;
    clrscr();

    printf("Enter radius: ");
    scanf("%f",&r);

    area=3.14*r*r;

    printf("Area of circle = %f",area);

    getch();
}
