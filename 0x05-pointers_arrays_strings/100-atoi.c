#include "main.h"

/**
 * _atoi - int
 * @s: pointer
 * Return: int.
 */

int _atoi(char *s)

{
	int i;
	int res = 0;
	int sig = -l;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -l;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = l;
		}
		else if (brk == l)
			break;
	}
	res = sig * res;
	return (res);
}
