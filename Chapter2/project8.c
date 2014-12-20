#include <stdio.h>

int main()
{
    float balance, intrate, monthlypayment;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter intest rate: ");
    scanf("%f", &intrate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlypayment);

    float month1 = (balance + (balance * (0.01f * intrate)/12)) - monthlypayment;
    printf("Balance remaining after first payment: %.2f\n", month1);
    float month2 =  (month1 + (month1 * (0.01f * intrate)/12)) - monthlypayment;
    printf("Balance remaining after Second payment: %.2f\n", month2);
    float month3 =  (month2 + (month2 * (0.01f * intrate)/12)) - monthlypayment;
    printf("Balance remaining after Second payment: %.2f\n", month3);


    return 0;
}