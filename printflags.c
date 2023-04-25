#include "main.h"
/* by NORA JEOUT AND CHARIFA MASBAHI */
/**
 * _getflags - Calculates active flags
 * @f: Formatted string in which to print the arguments
 * @u: take a parameter.
 * Return: return the Flags
 */
int _getflags(const char *f, int *u)
{
	int k, c;
	int flags = 0;
	const char C_FLAGS[] = {'-', '+', '0', '#', ' ', '\0'};
	const int arr_FLAGS[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (c = *u + 1; f[c] != '\0'; c++)
	{
		for (k = 0; C_FLAGS[k] != '\0'; k++)
			if (f[c] == C_FLAGS[k])
			{
				flags |= arr_FLAGS[k];
				break;
			}

		if (C_FLAGS[k] == 0)
			break;
	}

	*u = c - 1;

	return (flags);
}
