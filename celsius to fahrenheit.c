#include <stdio.h>

void main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);
}
