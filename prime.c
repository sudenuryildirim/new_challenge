#include <stdio.h>

int main(){

    int num1,num2,i,j,flag;


    printf("Enter first number: ");
    scanf("%d", &num1); 

    printf("Enter second number: ");
    scanf("%d", &num2); 


    printf("Prime numbers between %d and %d are: ", num1,num2);


    for (i = num1; i <= num2; i++){

        if (i == 1 || i == 0)
            continue;


        flag = 1; // flag = 1 means i is prime


        for (j = 2; j <= i / 2; ++j) 
        {
            if (i % j == 0) 
            {
                flag = 0; //flag = 0 means i is not prime
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}

//output:
//Enter first number: 0
//Enter second number: 20
//Prime numbers between 0 and 20 are: 2 3 5 7 11 13 17 19
