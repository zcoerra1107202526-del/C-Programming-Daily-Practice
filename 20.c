#include<stdio.h>
void main()
{
    char grade, section;

    clrscr();

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your section: ");
    scanf(" %c", &section);

    printf("\nGrade = %c", grade);
    printf("\nSection = %c", section);

    getch();
}
