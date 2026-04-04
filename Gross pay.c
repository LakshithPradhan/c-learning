// Write a program to calculate the gross pay (G.P) using the formula BP + DA + HRA on employee Basic pay (BP) is to be read through a keyboard.
//DA is 40% of BP HRA = 20% of Basic pay#include <stdio.h>

void main()
{
    float BP, DA, HRA, GP;

    printf("Enter the Basic pay: ");
    scanf("%f", &BP);

    DA = 0.40 * BP;
    HRA = 0.20 * BP;

    GP = BP + DA + HRA;

    printf("Gross pay = %.2f", GP);
}
