#include <stdio.h>
//5������
main()
{
	int n, i = 0, fibo1 = 0, fibo2 = 0;
	printf("���� n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n, sizeof(n));
	while (i <= n)
	{
		if (n == 1 || n == 2)
		{
			printf("fiboncci(%d) = %d\n", n, 1);
			break;
		}
		else
		{
			// i == 1 & 2�� ���� simplest case
			if (i == 1)
			{
				fibo1 = 0;
				fibo2 = 1;
			}
			else if (i == 2)
			{
				fibo1 = 1;
				fibo2 = 1;
			}
			else
			{
				fibo2 = fibo1 + fibo2;
				fibo1 = fibo2 - fibo1;
			}
			printf("fiboncci(%d) = %d\n", i, fibo2);
		}
		i++;
	}
}