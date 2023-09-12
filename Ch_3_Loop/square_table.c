#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50], i, n;
    printf("How many number you find square");
    scanf("%d" , &n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d*%d=%d\n",i,i,i*i);
    }
    return 0;
}
