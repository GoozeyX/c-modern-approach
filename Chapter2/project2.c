#include <stdio.h>
#define FACTOR 4.0f/3.0f
#define PI 3.1415926535f
int main(void)
{
    float radius = 10.0f;
    printf("Volume of sphere: %f\n", FACTOR * PI * (radius * radius * radius));
    return 0;
}
