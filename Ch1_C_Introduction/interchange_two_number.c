#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter value of A = ");
    scanf("%d" , &a);
    printf("Enter value of B = ");
    scanf("%d" , &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter interchange value A = %d , B = %d" , a, b);
    return 0;
}
