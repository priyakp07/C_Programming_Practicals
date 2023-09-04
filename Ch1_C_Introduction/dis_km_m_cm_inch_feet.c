// convert km into m, cm, inch, feet

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float i, j, a, b, c;
    printf("Enter distance of kilometer: ");
    scanf("%f" , &i);
    printf("\nconvert km into metre: ");
        j = i * 1000;
    printf("%f m",j);

    printf("\nconvert km into cm: ");
        a = i * 100000;
    printf("%f cm",a);

    printf("\nconvert km into feet: ");
        b = i * 3280.84;
    printf("%f ft",b);

    printf("\nconvert km into inch: ");
        c = i * 39370;
    printf("%f inch",c);
    return 0;
}
