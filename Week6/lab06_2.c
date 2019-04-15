#include <stdio.h>

void printFirst(int n);

int main()
{
	int num;
	printf("¨ú??? ?¢´¨ù?¢¬? ??¡¤???¨ö?¢¯? : ");
	scanf_s("%d", &num);
	printFirst(num);

}

void printFirst(int n)
{
	if (n < 10)
	{
		printf("%d\n", n);
	}
	else
	{
		printFirst(n / 10);
		printf("%d\n", n % 10);
	}
}