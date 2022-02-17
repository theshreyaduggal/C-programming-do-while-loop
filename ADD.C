/*sum of natural numbers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int a=1,sum=0;

   int num;

   printf("Enter a number");

   scanf("%d",&num);

   do

   {

     sum=a+sum;

     a++;

   }

   while (a<=num);

   printf("The sum is: %d",sum);

}