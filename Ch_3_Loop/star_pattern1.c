// star pattern

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
