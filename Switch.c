//Switch 

#include <stdio.h>

int main()
{
    int a=2, b=3;
    char c;
    
    printf("Enter your choice (+-/*) : ");
    scanf("%c",&c);
    
    switch(c)
    {
        case '*':
            printf("Product of %d and %d is %d",a,b,a*b);
            break;
        case '+':
            printf("Sum of %d and %d is %d",a,b,a+b);
            break;
        case '-':
            printf("Subtraction of %d and %d is %d",a,b,a-b);
            break;
        case '/':
            printf("Division of %d and %d is %d",a,b,a/b);
            break;
        default:
            printf("Enter correct operator (+-/*)");
    }
    
    return 0;
}