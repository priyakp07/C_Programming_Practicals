// Find length of the string

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[50];
    int i;
    printf("Enter a string:\n");
    fgets(a,50,stdin);
    for ( i = 0; a[i]!='\0'; i++);
    printf("length of the string is: %d",i);           
    return 0;
}
