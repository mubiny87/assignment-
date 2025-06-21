#include<stdio.h>

int facto(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("Factorial of %d is %d\n",i,facto(i));
    }

    return 0;
}
