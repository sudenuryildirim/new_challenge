//1.yöntem
#include <stdio.h>
void main()
{
    int array[8][6] = {{2,2},{3,3,3,3},{4},{5,5,5},{6,6,6,6,6},{7,7},{8,8,8,8},{9,9,9,9,9,9}};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (array[i][j] != 0)
            {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}

//output:
//2 2 
//3 3 3 3 
//4 
//5 5 5 
//6 6 6 6 6 
//7 7 
//8 8 8 8 
//9 9 9 9 9 9 

//2.yöntem
#include <stdio.h>
int main() 
{
    int array[8] = {2,3,4,5,6,7,8,9};

    for(int i = 0;i<2;i++){
       printf("%d ",array[0]);
    }
    printf("\n");

    for(int i = 0;i<4;i++){
       printf("%d ",array[1]);
    }
    printf("\n");
    for(int i = 0;i<1;i++){
       printf("%d ",array[2]);
    }
    printf("\n");
    for(int i = 0;i<3;i++){
       printf("%d ",array[3]);
    }
    printf("\n");
    for(int i = 0;i<5;i++){
       printf("%d ",array[4]);
    }
    printf("\n");
    for(int i = 0;i<2;i++){
       printf("%d ",array[5]);
    }
    printf("\n");
    for(int i = 0;i<4;i++){
       printf("%d ",array[6]);
    }
    printf("\n");
    for(int i = 0;i<6;i++){
       printf("%d ",array[7]);
    }
  return 0;  
}

//output:
//2 2 
//3 3 3 3 
//4 
//5 5 5 
//6 6 6 6 6 
//7 7 
//8 8 8 8 
//9 9 9 9 9 9 
