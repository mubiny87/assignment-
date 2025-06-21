#include <stdio.h>

float tax(float income)
{
    float t = 0;

    if(income > 1500000) {
        t += (income - 1500000) * 0.25;
        income = 1500000;
    }
    if(income > 1000000) {
        t += (income - 1000000) * 0.20;
        income = 1000000;
    }
    if(income > 600000) {
        t += (income - 600000) * 0.15;
        income = 600000;
    }
    if(income > 300000) {
        t += (income - 300000) * 0.10;
        income = 300000;
    }
    if(income > 200000) {
        t += (income - 200000) * 0.05;
        income = 200000;
    }

    return t;
}

int main()
{
    float inc;
    printf("Enter your total income: ");
    scanf("%f", &inc);

    float result = tax(inc);
    printf("Your total tax is: %.2f\n", result);

    return 0;
}
