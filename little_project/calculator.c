#include<stdio.h>
#include<stdlib.h>
int k = 0, result = 0;
int menu(){
    int ch;
    printf("\n 1. Addition");
    printf("\n 2. Substraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. modulus");
    printf("\n 6. clear");
    printf("\n 7. exit");
    printf("\n\n Enter your choice: ");
    scanf("%d" , &ch);
    return ch;
}
void Add(){
    int a, b;
    if (k){
        printf("\nEnter a number: ");
        scanf("%d" , &a);
        result+=a;
        printf("\nresult=%d" , result);
    }
    else{
        printf("Enter a two number: ");
        scanf("%d %d" , &a, &b);
        result = a + b;
        printf("\nresult=%d" , result);
    }
    k = 1;
}
void Sub(){
    int a, b;
    if (k){
        printf("\nEnter a number: ");
        scanf("%d" , &a);
        result-=a;
        printf("\nresult=%d" , result);
    }
    else{
        printf("Enter a two number: ");
        scanf("%d %d" , &a, &b);
        result = a - b;
        printf("\nresult=%d" , result);
    }
    k = 1;
}
void Mul(){
    int a, b;
    if (k){
        printf("\nEnter a number: ");
        scanf("%d" , &a);
        result*=a;
        printf("\nresult=%d" , result);
    }
    else{
        printf("Enter a two number: ");
        scanf("%d %d" , &a, &b);
        result = a * b;
        printf("\nresult=%d" , result);
    }
    k = 1;
}
void Div(){
    int a, b;
    if (k){
        printf("\nEnter a number: ");
        scanf("%d" , &a);
        result/=a;
        printf("\nresult=%d" , result);
    }
    else{
        printf("Enter a two number: ");
        scanf("%d %d" , &a, &b);
        result = a / b;
        printf("\nresult=%d" , result);
    }
    k = 1;
}
void Modu(){
    int a, b;
    if (k){
        printf("\nEnter a number: ");
        scanf("%d" , &a);
        result%=a;
        printf("\nresult=%d" , result);
    }
    else{
        printf("Enter a two number: ");
        scanf("%d %d" , &a, &b);
        result = a % b;
        printf("\nresult=%d" , result);
    }
    k = 1;
}
void clear(){
    printf("\nOld data is cleared.");
    result = 0;
    k = 0;
}
void main(int argc, char const *argv[])
{
    while (1){
    system("cls");
        printf("\n\n\t\tOld result = %d" , result);
    switch (menu())
    {
    case 1:
        Add();
            break;
    case 2:
        Sub();
            break;
    case 3:
        Mul();
            break;
    case 4:
        Div();
            break;
    case 5:
        Modu();
            break;
    case 6:
        clear();
            break;
    case 7:
        exit(0);
    default:
        printf("Please Enter a valid choice.");
            break;
        }
    }
}
