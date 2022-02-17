/*sum of series*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

    int num;

    float a=1,sum;

    printf("Enter the number");

    scanf("%d",&num);

    do

    {

      sum=(a/(a+1))+sum;

      a++;

    }

    while (a<num);

    printf("The sum is: %f",sum);

}