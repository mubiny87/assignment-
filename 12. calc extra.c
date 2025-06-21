#include <stdio.h>
#define PI 3.1416

// Area and perimeter of rectangle
float areaRect(float l, float w) { return l * w; }
float periRect(float l, float w) { return 2 * (l + w); }

// Area and perimeter of circle
float areaCircle(float r) { return PI * r * r; }
float periCircle(float r) { return 2 * PI * r; }

// Volume of cube and sphere
float volCube(float a) { return a * a * a; }
float volSphere(float r) { return (4.0 / 3.0) * PI * r * r * r; }

int main() {
    int choice;
    float l, w, r, a;

    printf("Select an option:\n");
    printf("1. Area of Rectangle\n");
    printf("2. Perimeter of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("4. Perimeter of Circle\n");
    printf("5. Volume of Cube\n");
    printf("6. Volume of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter length and width: ");
        scanf("%f %f", &l, &w);
        printf("Area = %.2f\n", areaRect(l, w));
    }
    else if(choice == 2) {
        printf("Enter length and width: ");
        scanf("%f %f", &l, &w);
        printf("Perimeter = %.2f\n", periRect(l, w));
    }
    else if(choice == 3) {
        printf("Enter radius: ");
        scanf("%f", &r);
        printf("Area = %.2f\n", areaCircle(r));
    }
    else if(choice == 4) {
        printf("Enter radius: ");
        scanf("%f", &r);
        printf("Perimeter = %.2f\n", periCircle(r));
    }
    else if(choice == 5) {
        printf("Enter side length: ");
        scanf("%f", &a);
        printf("Volume = %.2f\n", volCube(a));
    }
    else if(choice == 6) {
        printf("Enter radius: ");
        scanf("%f", &r);
        printf("Volume = %.2f\n", volSphere(r));
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
