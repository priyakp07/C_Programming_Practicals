// find even and odd number:

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[10], i;
    for ( i = 0; i < 10; i++)
    {
        printf("write a number: ");
        scanf("%d" , &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)  {
        printf("even number: %d\n"  , a[i]);
        }
        else  {
        printf("odd number: %d\n" , a[i]);
        }
    }
    
    return 0;
}
