//  Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int num,i,reverse=0,remainder;
    printf("Enter a number : ");
    scanf("%d",&num);
   while(num!=0)
   {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
   }
   printf("Reverse is %d ",reverse);
}