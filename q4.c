// 4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
    int main()
{
    int i,sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of square of  first n natural number is %d",sum);
}