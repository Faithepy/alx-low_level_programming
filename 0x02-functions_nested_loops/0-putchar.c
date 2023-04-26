Task 0


#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**

 * main - Entry point

 *

 * Return: Always 0 (success)

 */


int main(void)

{


printf("_putchar\n");


return (0);

}




Task 1


#include "main.h"

#include <unistd.h>


/**

 * print_alphabet - Entry point

 * Return:0

 */


void print_alphabet(void)

{

        char c = 'a';


        while (c <= 'z')

        {

                _putchar(c);

                c++;


        }

        _putchar('\n');


}
