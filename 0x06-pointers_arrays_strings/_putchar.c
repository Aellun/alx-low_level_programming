1 #include "main.h"
  2 #include <unistd.h>
  3 /**
  4 *_putchar - writes the character c to stdout
  5 *@c the character to print
  6 * return on success 1
  7 *on error - 1 is returned and errn is set appropriately
  8 */
  9 int _putchar(char c)
 10 {
 11         return (write(1, &c, 1));
 12 }

