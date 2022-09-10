#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//Man-this is where the program starts running
//Returns:returns zero if no error and non zero if error

int main()
{
int n;
   srand(time(NULL));
   n= rand()-RAND_MAX/ 10;
   if (n>0)
   
  printf("%d is zero\n", n);
  else if(n<0)
  
  printf("%d is negative\n",n);
  else 
  printf("%d is zero\n",n);
  
  return 0;
}


