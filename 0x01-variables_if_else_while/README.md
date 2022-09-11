0-This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
1-This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
2-Write a program that prints the alphabet in lowercase, followed by a new line.
3-Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
4-Write a program that prints the alphabet in lowercase, followed by a new line.
5-Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
6-Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
7-Write a program that prints the lowercase alphabet in reverse, followed by a new line
8-Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
9-Write a program that prints all possible combinations of single-digit numbers
10-Write a program that prints all possible different combinations of two digits
11-Write a program that prints all possible different combinations of three digits
12-Write a program that prints all possible combinations of two two-digit numbers
cat > 0-positive_or_negative.c
#include <stdlib.h> 
 #include <time.h> 
 #include <stdio.h> 
  
 /** 
  * main - Prints a random number and states whether 
  *        it is positive, negative, or zero. 
  * 
  * Return: Always 0. 
 */ 
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
  
         if (n > 0) 
                 printf("%d is positive\n", n); 
         else if (n < 0) 
                 printf("%d is negative\n", n); 
         else 
                 printf("%d is zero\n", n); 
  
         return (0); 
