#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, i, n;
    printf("Enter value: ");
    scanf("%d",&a);
    printf("how many number you find multiplication table: ");
    scanf("%d",&n);
    printf("Multiplication table is:\n");
    for (i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",a,i,i*a);
    }
    return 0;
}
