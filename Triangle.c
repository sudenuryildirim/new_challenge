#include<stdio.h>
#include<conio.h>

int main(){

int x,y,z;

printf("Enter x value: "); 
scanf("%d",&x);

printf("Enter y value : "); 
scanf("%d",&y);

printf("Enter z value : "); 
scanf("%d",&z);

if(x==y && y==z){
printf("Equilateral triangle");
}
else if(x!=y && x!=z && y!=z){
printf("Scalene triangle");
}
else{
printf("Isosceles triangle");
}
return 0;
}
