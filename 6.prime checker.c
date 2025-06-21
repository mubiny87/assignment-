#include<stdio.h>

int prime(int n)
{
    if(n < 2) return 0;
    if(n == 2 || n == 3 || n == 5 || n == 7 || n == 11) return 1;
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0) return 0;
    return 1;
}

int main()
{
    int n, i;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &n);

    if(prime(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    printf("\nHere are the prime numbers from 1 to 100:\n");
    for(i = 1; i <= 100; i++)
    {
        if(prime(i))
            printf("%d ", i);
    }

    return 0;
}


