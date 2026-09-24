#include<stdio.h>

void main()
{
    int sensor1, sensor2;
    int sum, sub, mul, div, mod;

    printf("Enter sensor 1: ");
    scanf("%d", &sensor1);

    printf("Enter sensor 2: ");
    scanf("%d", &sensor2);

    sum = sensor1 + sensor2;
    sub = sensor1 - sensor2;
    mul = sensor1 * sensor2;
    div = sensor1 / sensor2;
    mod = sensor1 % sensor2;

    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);
    printf("Modulus = %d\n", mod);
}
