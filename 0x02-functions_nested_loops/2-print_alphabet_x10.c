#include "main.h"
/**
 *print_alphabet_x10 - print lowercase alphabet ten times
 *return: 0, always
 */
void print_alphabet_x10(void)
{
char alpha;
int counter;
for (counter = 1; counter <= 10; counter++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}

