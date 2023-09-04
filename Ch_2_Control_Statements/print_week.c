// week table

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int days;
    printf("choose days number: ");
    scanf("%d" , &days);
    switch (days)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wedday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("saturday");
        break;
    }
    return 0;
}
