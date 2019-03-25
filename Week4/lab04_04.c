#include <stdio.h>

int main()
{
	int i, j, count;
	for (i = 1; i <= 100; i++)
	{
		for (j = 1, count = 0; j <= i; j++)
		{
			if (i %  j == 0)
			{
				count++;
			}
		}
		if (count <= 2) // ¨ù?¨ù??? ¡Æ©¡¢¯? ??¡¤?
		{
			printf(" %d ", i);
		}
	}
	return 0;
}