#include<stdio.h>

void ctof(float x)
{
float y;
y=(x*9/5)+32;
printf("%f",y);
}

void ftoc(float x)
{
float y;
y=(x-32)*5/9;
printf("%f",y);
}

int main()
{
int a;
float value;
printf("Enter 1 to convert\n");
printf("1 for C to F & 2 for F to C\n");
scanf("%d",&a);
printf("enter the value: ");
scanf("%f",&value);
if(a==1)
    {
        ctof(value);
    }
else if (a==2)
    {
        ftoc(value);
    }
else
    {
        printf("error");
    }
return 0;

}
