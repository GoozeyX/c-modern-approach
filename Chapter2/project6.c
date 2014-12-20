#include <stdio.h>

int main(void)
{
    float x;
    printf("Please input a number: ");
    scanf("%f", &x);

    float val = ((((3 * x + 2) * x - 5) * x + 7) * x - 6);


                // (3 * (x * x * x * x * x)) +
                // (2 * (x * x * x * x)) -
                // (5 * (x * x * x)) -
                // (x * x) +
                // (7 * x) -
                // 6;

    printf("Value of polynomial is: %f\n", val);
    return 0;
}
