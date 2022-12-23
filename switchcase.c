#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    char operator;
    printf("Enter the operator (+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    switch (operator) {
        case '+':
            printf("the addition %d + %d=%d", a, b, (a + b));
            break;
        case '*':
            printf("the multiplication %d * %d=%d", a, b, (a * b));
            break;
         case '-':
            printf("the substraction %d - %d=%d", a, b, (a - b));
            break;
            
         case '/':
            printf("the division %d / %d=%d", a, b, (a / b));
            break;
            
        default:
            printf("error");

    }
    return 0;
}
