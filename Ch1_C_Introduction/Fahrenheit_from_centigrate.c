// computr Faherenheit from centigrade

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float f,c;
    printf("Enter centigrade value:  ");
    scanf("%f" , &c);
    printf("fahrenheit value is:  ");
    f = 1.8*c+32;
    printf("%f" , f);
    return 0;
}
