#include "main.h"
/**
 * print_chessboard - prints chessbaord
 *
 * @a: rows in the array
 *
 * Return:  void
 */
void print_chessboard(char (*a)[8])
{
int i, j;

i = j = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
