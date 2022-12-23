#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;
for (i = 1; i<=5; i++){
    for(k = 0; k <5-i; k++){
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("A");
    } 
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("k");
    }
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("i");
    }    
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("f");
    }

    printf("\n");
}

}

/*output:
    A k i f
   AA kk ii ff
  AAA kkk iii fff
 AAAA kkkk iiii ffff
AAAAA kkkkk iiiii fffff */



//
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;

for (i = 1; i<=4; i++){
    for(k = 0; k <4-i; k++){
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("A");
        break;
    } 
    printf(" ");
    for(j = 1; j<i; j++){
        printf("k");
        break;
    } 
    printf(" ");
    for(j = 2; j<i; j++){
        printf("i");
        break;
    }
    printf(" ");
    for(j = 3; j<i; j++){
        printf("f");
        break;
    }
    printf("\n");
}

}

/*output:
   A   
  A k  
 A k i 
A k i f */
