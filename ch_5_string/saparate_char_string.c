// Separate the individual characters from a string

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[50];
    int i;
    printf("\n\nSeparate the individual characters from a string :\n");
    printf("------------------------------------------------------\n"); 	
    printf("Input the string : ");
    fgets(a,50, stdin);
	printf("The characters of the string are :");
    for ( i = 0; a[i]; i++) {
        printf("%c ",a[i]);
    }
    return 0;
}
