//  find the maximum number between two numbers using a pointer:

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c, d, *a = &c, *b = &d;
    printf("enter two number: ");
    scanf("%d %d", a , b);
    if (*a>*b)
    {
        printf("max value is: %d" , *a);
    }
    else
    {
        printf("max value is: %d" , *b);
    }
    return 0;
}
