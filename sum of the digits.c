#include<stdio.h>
void main()
{
printf("The following program is to find the sum of all the digits of the number:-\n\n");
int num,sum=0,x;
printf("Enter a number to find sum of its digits :- ");
scanf("%d",&num);
while(num>0)//The loop will work until the number is 0
{
  x=num%10;//modulus operator is used as it returns the remainder(The last digit)
  sum=sum+x;
  num=num/10;//to get the remaining number
}
printf("The sum of the digits of the given number is :-   %d",sum);
}
