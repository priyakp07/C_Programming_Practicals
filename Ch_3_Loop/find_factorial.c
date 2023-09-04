// find factorial value

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j=1;
    printf("Enter a value");
    scanf("%d" , &n);
    
    for ( i = 1; i <= n; i++)
    {
        j = j * i;
    }
    printf("This factororoal is %d" , j, n);
    return 0;
}
