#include <stdio.h>
int main(void)
{
    int x, y, z;

// first example is equal
    printf("Example 1 now: %%d vs \" %%d\"\n");
    scanf("%d", &x);
    printf("%d\n", x);

    scanf(" %d", &x);
    printf("%d\n", x);
//second example seems to be equal
    printf("Example 2 now: %%d-%%d-%%d vs %%d -%%d -%%d\n");
    scanf("%d-%d-%d", &x, &y, &z);
    printf("%d-%d-%d\n", x, y, z);

    scanf("%d -%d -%d", &x, &y, &z);
    printf("%d-%d-%d\n", x, y, z);
 
 // Second one will wait for a non blank/newline character to interrupt it, thus not equal.   
    float a;
    printf("Example 3 now: %%f vs \"%%f \"\n");
    scanf("%f", &a);
    printf("%f\n", a);

    scanf("%f ", &a);
    printf("%f \n", a);
    float d, c;
// equal
    printf("Example 4 now: %%f,%%f vs %%f, %%f \n");
    scanf("%f,%f", &d, &c);
    printf("%f,%f \n", d, c);
/* same */
    scanf("%f, %f", &d, &c);
    printf("%f, %f \n", d, c);
    return 0;
}