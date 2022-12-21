//Enter marks of 5 subjects and declare grade

#include <stdio.h>

int main()
{
    int a,b,c,d,e,avg;
    
    printf("Enter 1st Subject : ");
    scanf("%d",&a);
    printf("Enter 2nd Subject : ");
    scanf("%d",&b);
    printf("Enter 3rd Subject : ");
    scanf("%d",&c);
    printf("Enter 4th Subject : ");
    scanf("%d",&d);
    printf("Enter 5th Subject : ");
    scanf("%d",&e);
    
    avg=((a+b+c+d+e)/5);
    
    if(avg<=100 && avg>=75)
        printf("Grade A");
    else if(avg<75 && avg>=65)
        printf("Grade B");
    else if(avg<65 && avg>=55)
        printf("Grade C");
    else if(avg<55 && avg>=45)
        printf("Grade D");
    else if(avg<45 && avg>=40)
        printf("Grade E");
    else
        printf("Fail");
    
    return 0;
}