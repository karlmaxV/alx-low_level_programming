

#include <unistd.h>

/*_putchar writes the char c to stdout
 * @c; The character print
 *
 * Return - success 1.
 * On erro - -1 is returned, and errno is set appropriately.
 * /
 *
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
