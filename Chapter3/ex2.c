#include <stdio.h>

int main(void)
{
    float a = 4.321f;

    printf("%-8.1e\n", a);
    printf("%10.6e\n", a);
    printf("%-8.3f\n", a);
    printf("%6.0g\n", a);

return 0;
}