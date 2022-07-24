// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i=1,num,fact=1;
    printf("Enter a number which you want to factorial of it: ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",num,fact);
}