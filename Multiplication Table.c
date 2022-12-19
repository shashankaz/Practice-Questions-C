//Write a program to display a multiplication table for any integer

#include <stdio.h>

int main()
{
    int n,i,t;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(i=1;i<11;i++)
    {
        t=n*i;
        printf("%d X %d = %d\n",n,i,t);
    }

    return 0;
}