//Write a program to print the elements of array in reverse order.

#include <stdio.h>    
     
int main()    
{    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};     
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original Array : ");  
    
    for (int i = 0; i < length; i++) 
    {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in Reverse Order: ");
    
    for (int i = length-1; i >= 0; i--) 
    {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    