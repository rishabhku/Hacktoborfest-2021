#include<stdio.h>
int main() 
{
    int i,sum=0,rem;
    printf("Enter the five digit number=");
    scanf("%d",&i);
    while(i>1)
    {
    rem=i%10;
    sum=sum+rem;
    i=i/10;
    }
    printf("The sum of 5 digit number are= %d",sum);
    
return 0;
