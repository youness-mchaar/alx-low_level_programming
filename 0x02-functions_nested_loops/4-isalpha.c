#include"main.h"

/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int main(void)
{
   int r;
   r = _isalpha('H');
   _putchar(r + 'O');
   r = _isalpha('0');
   _putchar(r + 'O');
   r = _isalpha(100);
   _putchar(r + 'O');
   r = _isalpha(';');
   _putchar(r + 'O');
   _putchar('\n');
   return(0);
}

