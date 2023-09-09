// decending order

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50], i, n, j, dec;
    printf("How many number giving accending order: ");
    scanf("%d" , &n);

    printf("Enter number: ");
    for ( i = 0; i < n; i++)
        scanf("%d" , &a[i]);
        for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
           if (a[i] < a[j])
           {
            dec = a[i];
            a[i] = a[j];
            a[j] = dec;
           }
        } 
    }  
    printf("decending order is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d " , a[i]);
    }
    return 0;
}
