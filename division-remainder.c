#include <stdio.h>

int main() {
    int num1,num2;
    float division,remainder;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    division = num1 / num2;
    remainder = num1 % num2;

    printf("%d of %d division result = %.2f\n",num1,num2,division);
    printf("%d of %d remainder result = %.2f",num1,num2,remainder);

    return 0;
}
