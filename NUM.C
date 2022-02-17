/*Space counting*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

  int num,sum;

  int a=0;

  printf("Enter a no.");

  scanf("%d",&num);

  do

  {

     sum=a+1;

     a=a+2;

     printf("%d	%d \n",sum,a);

  }

9  while (num>=a);

}