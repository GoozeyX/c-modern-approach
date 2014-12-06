#include <stdio.h>

int main()
{
    float initial;
    
    printf("Enter an Amount: ");
    scanf("%f", &initial);
    printf("With tax added: %.2f\n", initial * 1.05f);

    return 0;
}