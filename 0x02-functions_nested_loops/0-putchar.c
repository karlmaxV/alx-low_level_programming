#include "putchar.h"

/*main - starting point
 *
 * Return - always return 0
 */

int main(void){
	char *ch = "_putchar";

	while (*ch){
		_putchar(*ch);
		ch++;
	}
	_putchat('\n');
	return (0);

}