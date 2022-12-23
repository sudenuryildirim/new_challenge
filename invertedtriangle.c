#include<stdio.h>

int main()
{
    int i,j,k,l;

    printf("Enter the number of lines:");
    scanf("%d",&k);

    for(i=k; i>=1; --i)
    {
        for(l=0; l < k-i; ++l)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
    }

    return 0;
}

/*output:
Enter the number of lines:5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *       */
