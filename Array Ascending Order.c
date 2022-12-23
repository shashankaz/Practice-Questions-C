//Write a program to take 10 random inputs from user in array and sort in ascending order.

#include <stdio.h>
int main()
    {
 
        int i, j, a, n, number[30];
        
        printf("Enter the Size of Array : ");
        scanf("%d", &n);
 
        printf("Enter the Numbers : \n");
        
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("The Numbers after Arranged in Ascending Order : ");
        for (i = 0; i < n; ++i)
            printf("%d ", number[i]);
 
    }