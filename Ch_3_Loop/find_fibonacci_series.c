// find fibonacii series

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, n1=0, n2=1, n3;
    printf("Enter the value");
    scanf("%d" , &n);
    printf("\n%d %d" , n1,n2);
    for ( i = 1; i <= n; i++)
    {
       n3=n1+n2;
       printf(" %d" , n3);
       n1=n2;
       n2=n3;
    }
    return 0;
}
