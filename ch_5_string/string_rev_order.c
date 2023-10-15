// print individual characters of a string in reverse order.

#include<stdio.h>
#include<string.h>
void main(int argc, char const *argv[])
{
    char a[50];
    int i;
    printf("Enter a string: ");
    fgets(a,50,stdin);
    printf("The characters of the string in reverse are : \n");
    strrev(a);
    for ( i = 0; a[i]; i++) {
        printf("%c ",a[i]);
    }
}
