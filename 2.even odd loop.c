#include <stdio.h>

// Function to check even or odd
void EvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main()
{
    int n[] = {3, 4, 7, 10, 15, 20};
    int size = sizeof(n) / sizeof n[0];
    for (int i = 0; i < size; i++) {
        EvenOdd(n[i]);
    }

    return 0;
}

