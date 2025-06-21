#include<stdio.h>

void leap(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        printf("%d is a leap year\n", y);
    else
        printf("%d is not a leap year\n", y);
}

int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    leap(y);
    return 0;
}
