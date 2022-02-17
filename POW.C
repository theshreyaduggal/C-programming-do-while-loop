/*Priting powers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

  int m,n;

  int a=1,pow=1;

  printf("Enter the base");

  scanf("%d",&m);

  printf("Enter the power");

  scanf("%d",&n);

  do

  {

    pow=pow*m;

    a++;

  }

  while (a<=n);

  printf("The answer is: %d",pow);

}