//Pattern printing

#include <stdio.h>

int main() 
{
    int x,y,n,k;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    
    for(k=n;k>=1;k--)
    {
        for(y=1;y<k;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    
    return 0;
}
