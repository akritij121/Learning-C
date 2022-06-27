#include <stdio.h>
int main() {    

    int a, b, sum = 0;
    
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Enter the number: ");
    scanf("%d", &b);
    
    sum = a + b;      
    
    printf("%d + %d = %d", a, b, sum);
    return 0;
}
