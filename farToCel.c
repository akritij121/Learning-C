#include <stdio.h>

int main()
{
    float cel, far;

    printf("Enter in fahrenheit - ");
    scanf("%f", &far);

    cel = ((far-32)*5)/9;

    printf("In Celsius - %.2f", cel);    

    return 0;
}
