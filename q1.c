// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first n natural number is %d",sum);
}