// find minimum value 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50], n, i, mini;
    printf("How many number you find minimum value");
    scanf("%d", &n);
    printf("Enter value");
    for ( i = 0; i < n; i++)
    {
        scanf("%d" , &a[i]);
        if (i==0)
        {
            mini=a[i];
        }
        else
        {
            if (a[i]<mini)
            {
                mini=a[i];
            }
        }
    }
        printf("minimum value is = %d",mini);
    return 0;
}
