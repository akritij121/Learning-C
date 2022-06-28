#include <stdio.h>
int main() {
    double a, b, c;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    c = a * b;

    printf("Product = %.2lf", c);
    
    return 0;
}
