//Girilen sayının faktöriyelini bulan c program

#include<stdio.h>

int main(){

    int i,number;
    int a=1;

    printf("Enter a number:");
    scanf("%d",&number);

    for (i=1; i<=number; i++){
        a *= i;
    }

    printf("The factorial of the entered number %d! = %d",number,a);
    return 0;
    }

//output:
//Enter a number:5
//The factorial of the entered number 5! = 120
