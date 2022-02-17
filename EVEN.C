/*Printing even numbers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int num=0;

   do

   {

     printf("%d \n",num);

     num=num+2;

   }

   while (num<=50 && num%2==0);

}