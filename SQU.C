/*sum of squares*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int a=1,sum=0;

   int b;

   printf("Enter a number");

   scanf("%d",&b);

   do

   {

     sum=(a*a)+sum;

     a++;

   }

   while (a<=b);

   printf("The sum is: %d",sum);

}