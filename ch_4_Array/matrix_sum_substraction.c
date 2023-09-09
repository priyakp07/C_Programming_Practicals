#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50][50], b[50][50], sum[50][50], sub[50][50], i, j, n;
    printf("how many squre value find: ");
    scanf("%d",&n);
    printf("Enter first matrix value:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix value:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix value is: ");
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\nsecond matrix value is:");
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
    }
    // sum of matrix 
    printf("\nsum of matrix is:");
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
        {
        sum[i][j]=a[i][j]+b[i][j];
        printf("%d ",sum[i][j]);
        }
    }
    // substraction of matrix 
    printf("\nsubstraction of matrix is:");
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
        {
        sub[i][j]=a[i][j]-b[i][j];
        printf("%d ",sub[i][j]);
        }
    }
    return 0;
}
