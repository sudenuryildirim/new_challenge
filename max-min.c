#include <stdio.h>
#define size 10
int main(){
    int numbers[size];
    int max,min,i;

    for(i=0 ; i<size ; i++){
        printf("Enter the %d. number: ",i+1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    min = numbers[0];

     for(int i=0 ; i<size ; i++){
        if(max < numbers[i])
            max = numbers[i];

        if(min > numbers[i])
            min = numbers[i];
     }

     printf("Maximum value:%d\n", max);
     printf("Minimum value:%d", min);
 }


/*output:
Enter the 1. number: 11
Enter the 2. number: 21
Enter the 3. number: 47
Enter the 4. number: 89
Enter the 5. number: 93
Enter the 6. number: 47
Enter the 7. number: 81
Enter the 8. number: 26
Enter the 9. number: 31
Enter the 10. number: 39
Maximum value:93
Minimum value:11*/
