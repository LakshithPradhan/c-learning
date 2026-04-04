#include <stdio.h>

int main()
{
    float l, w, A, P;

    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);

    A = l * w;
    P = 2 * (l + w);

    printf("Area = %f\n", A);
    printf("Perimeter = %f\n", P);

    return 0;
}
