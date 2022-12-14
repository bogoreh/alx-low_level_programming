<<<<<<< HEAD
nclude "main.h"

	/**
	 *
	 * 	 * main - print _putchar
	 *
	 * 	 	 * is written by mbah
	 *
	 * 	 	 	 * Return: 0
	 *
	 * 	 	 	 	 */





	int main(void)

		{

				_putchar('_');

					_putchar('p');

						_putchar('u');

							_putchar('t');

								_putchar('c');

									_putchar('h');

										_putchar('a');

											_putchar('r');

												_putchar('\n');

													return (0);

														}


=======
#include "main.h"
#include <stdio.h>
/**
 * main - uses the functions declared via the arguments passed
* Description: prints putchar
* Return: always zero or something else passed
*/
int main(void)

{
	char text[9] = "_putchar";

	int i = 0;

	for (i = 0; i < 8; i++)
{

	putchar(text[i]);
}

	putchar('\n');
return (0);
}
>>>>>>> fe8ede9df37484639b93c772b860b3e702f3f8e1
