#include <stdio.h>
//3������
main()
{
	int n, sum, i;
	printf("���� n �� �Է��Ͻÿ� : ");
	scanf_s("%d", &n, sizeof(int));
	sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("n! = %d", sum);
}