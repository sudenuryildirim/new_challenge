#include<stdio.h>

void swap(int *,int *);
int main()
{
    int num1,num2;
    int *ptr,*ptr2;
    printf("Enter a num1:");
    scanf("%d",&num1);

    printf("Enter a num2:");
    scanf("%d",&num2);

    ptr=&num1;
    ptr2=&num2;

    swap(ptr,ptr2);

    return 0;
}
void swap(int *ptr,int *ptr2){
     int temp;
     temp=*ptr;
     *ptr=*ptr2;
     *ptr2=temp;

     printf("num1=%d and num2=%d\n",*ptr,*ptr2);


}

//output:
//Enter a num1:23
//Enter a num2:45
//num1=45 and num2=23
