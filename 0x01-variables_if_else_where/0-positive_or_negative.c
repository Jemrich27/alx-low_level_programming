#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
* main-Prints a random number and states
* whether it is positive, negative or zero.
*
* Return:Always 0.
*/

int main()
{
int n;
   srand(time(NULL));
   n= rand()-RAND_MAX/ 6;
   
   if (n>0)
   
  printf("%d is zero\n", n);
  else if(n<0)
  
  printf("%d is negative\n",n);
  else 
  printf("%d is zero\n",n);
  
  return 0;
}
