#include<stdio.h>
void main()
{
    int rupees,paise;
    clrscr();

    printf("Enter amount in rupees: ");
    scanf("%d",&rupees);

    paise=rupees*100;

    printf("Amount in paise = %d",paise);

    getch();
}
