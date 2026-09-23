#include<stdio.h>
void main()
{
    int age, rollno;

    clrscr();

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your roll number: ");
    scanf("%d", &rollno);

    printf("\nAge = %d", age);
    printf("\nRoll Number = %d", rollno);

    getch();
}
