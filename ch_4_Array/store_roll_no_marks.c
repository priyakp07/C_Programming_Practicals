// program to read and store the roll number and marks of 20 students using array

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int roll_no[20], marks[20], i;
    for ( i = 0; i < 20; i++)
    {
       printf("Enter roll number : ");
       scanf("%d" , &roll_no[i]);
       printf("Enter marks number : ");
       scanf("%d" , &marks[i]);
    }
    for ( i = 0; i < 20; i++)
    {
        printf("roll number: %d   marks: %d\n" , roll_no[i], marks[i]);
    }

    return 0;
}
