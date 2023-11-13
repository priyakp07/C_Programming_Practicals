    // count the total number of the word

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[50], i, word=1;
    printf("Enter to the string:\n");
    fgets(a,50,stdin);
    for ( i = 0; a[i]; i++)
    {
        if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
        {
           word=word+1;
        }
    }
    printf("count total number of the word is: %d\n",word-1);
    return 0;
}
