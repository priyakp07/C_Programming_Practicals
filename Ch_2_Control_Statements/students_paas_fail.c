// program to read marks of a student from keyboard whether the students is pass or fail

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a marks out of 100: ");
    scanf("%d" , &a);
    
    if(a>=33)
    printf("you are pass");
    else
    printf("you are fail");
    return 0;
}
