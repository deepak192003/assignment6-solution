// 7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int count=0,num,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count=count+1;
    }
    printf("Digits is %d",count);
}