// 3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
    int main()
{
    int i,sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }    
    }
    printf("Sum of first n odd natural number is %d",sum);
}