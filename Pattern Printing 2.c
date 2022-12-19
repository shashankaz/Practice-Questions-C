//Pattern printing

#include <stdio.h>
int main() 
{
    int x,y,n;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(x=n;x>0;x--)
    {
        for(y=x;y>0;y--)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    
    return 0;
}