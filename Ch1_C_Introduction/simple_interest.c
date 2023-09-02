#include<stdio.h>

int main(int argc, char const *argv[])
{
    float i,p,r,n;
    printf("Enter value\n");
    scanf("%f %f %f" , &p,&r,&n);
    printf("simple interest");
    {
        i=(p*r*n)/100;
    }
    printf("%f",i);
    return 0;
}
