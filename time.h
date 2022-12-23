//While researching, I came across the time.h library and wanted to throw it here as an example.

#include<stdio.h>
#include<time.h> //time library

int main(){

    time_t t;  
    time(&t);

    printf("This program has been writeen at (date and time): %s", ctime(&t));

    return 0;
}

//output:
//This program has been writeen at (date and time): Thu Dec 22 21:53:06 2022
