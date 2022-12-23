#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    char d;


    //In “%zu” format, z is a length modifier and u stand for unsigned type. 
    printf("int size:%zu bytes\n", sizeof(a));
    printf("float size:%zu bytes\n", sizeof(b));
    printf("double size:%zu bytes\n", sizeof(c));
    printf("char size:%zu byte", sizeof(d));

    return 0;
}

//output:
//int size:4 bytes
//float size:4 bytes
//double size:8 bytes
//char size:1 byte
