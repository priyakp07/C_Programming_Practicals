//  find the add two numbers using a pointer

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, *p, *q;
    printf("Enter two numbers: ");
    scanf("%d %d" , &a, &b);
    p = &a;
    q = &b;
    c = *p + *q;
    printf("this sum is: %d" , c);

    return 0;
}
