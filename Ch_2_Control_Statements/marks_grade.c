// find marks and grade for students:

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sub1, sub2, sub3, total;
    float avg;;
    printf("Enter maths marks: ");
    scanf("%d" , &sub1);
    printf("Enter physics marks: ");
    scanf("%d" , &sub2);
    printf("Enter chemistry marks: ");
    scanf("%d" , &sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("total = %d\n" , total);
    printf("percentage = %f\n" , avg);
    if (avg>=60 && avg<=79)
    {
        printf("you are passed first class");
    }
    else if(avg>=40 && avg<=59)
    {
        printf("you are passed second class");
    }
    else if (avg<40)
    {
       printf("you are fail");
    }

    return 0;
}
