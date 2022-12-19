//Write a program to check whether a number is palindrome or not

#include <stdio.h>
int main() 
{
    int n, reversed = 0, remainder, original;
    printf("Enter an Integer : ");
    scanf("%d", &n);
    
    original = n;

    while (n != 0) 
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a Palindrome.", original);
    else
        printf("%d is Not a Palindrome.", original);

    return 0;
}