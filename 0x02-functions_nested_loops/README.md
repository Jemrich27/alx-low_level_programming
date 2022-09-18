C - Functions, nested loops
0- Write a program that prints _putchar, followed by a new line.
1- 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
W2- Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
3- Write a function that checks for lowercase character.
4-Write a function that checks for alphabetic character.
5-Write a function that prints the sign of a number.
6-There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
julien@ubuntu:~/0x02$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$ 
