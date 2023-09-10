// accept a grade and declare the equivalent description
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("input the grade: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'E':
      printf("Exellent");
        break;
    case 'V':
      printf("very good");
        break;
    case 'F':
      printf("fail");
        break;
    case 'G':
      printf("Good");
        break;
    case 'A':
      printf("Average");
        break;
    }
    return 0;
}
