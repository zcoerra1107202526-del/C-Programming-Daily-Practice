#include<stdio.h>
void main()
{
  int sensor1,sensor2,sum;
clrscr();
printf("Enter the value of sensor 1:");
scanf("%d",&sensor1);

printf("Enter the value of sensor 2:");
scanf("%d",&sensor2);

sum=sensor1+sensor2;

printf("Sum of sensor 1 and sensor 2  is %d",sum);
getch();
}

