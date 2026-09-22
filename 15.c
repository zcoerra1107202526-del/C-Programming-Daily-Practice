#include<stdio.h>
void main()
{
    int days, weeks, remaining;

    clrscr();

    printf("Enter number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    remaining = days % 7;

    printf("Weeks = %d", weeks);
    printf("\nRemaining Days = %d", remaining);

    getch();
}
