// how to find maximum value using by array

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, a[50],n,  max;
    printf("how many number you find maximum value");
    scanf("%d" , &n);
    for ( i = 0; i < n; i++)
{
        printf("Enter number: ");
        scanf("%d" , &a[i]);
    if (i==0)
    {
        max = a[i];
    }
    else
    {
        if (max<a[i])
        {
            max = a[i];
        }
    }
}
        printf("maximum value is = %d",max);
    return 0;
}
