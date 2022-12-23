//switch-case

#include <stdio.h>

int main() {

    int num1,num2,result;
    char op;
    
    printf("Choice a operator (+, -, *, /):");
    scanf("%c", &op);
    
    printf("Enter first number:");
    scanf("%d",&num1);
    
    printf("Enter first number:");
    scanf("%d",&num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %d",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %d",result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %d",result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result = %d",result);
            break;
        
        default:
            printf("You have selected the wrong operator!");
    }

    return 0;
}

//if-else
#include <stdio.h>
#include <conio.h>
int main(){

	int num1,num2;
	float result;
	char op;
	printf("Choose an operator(+ - / *):");
	scanf("%c",&op);
	
	printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
	scanf("%d",&num2);

	if(op=='+'){
		result = num1 + num2;
		printf("Result = %.2f",result);
	}
	else if(op=='-'){
		result = num1 - num2;
		printf("Result = %.2f",result);
	}
	else if(op=='*'){
		result = num1 * num2;
		printf("Result = %.2f",result);
	}
	else if(op=='/'){
		result = num1 / num2;
		printf("Result = %.2f",result);
	}
    else{
        printf("You entered the wrong operator!");
    }
	return 0;
}
