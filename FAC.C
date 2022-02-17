/*printing factorial*/
#include<stdlib.h>
#include<stdio.h>

void main()

{

   int a=1,b;

   int fac=1;

   printf("Enter a no.");

   scanf("%d",&b);

   do

   {


	fac=(a*fac);

	a++;

   }

   while (a<=b);

   printf("The fctorial is: %d",fac);

}
