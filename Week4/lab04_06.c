#include <stdio.h>
//6�� ����
main()
{
	int n, i, sum = 0;
	printf("���� n�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n, sizeof(int));
	for (i = 1; i <= n; i++)
	{
		if (i % 3 != 0)
		{
			sum += i;
		}
	}
	printf("1 ~ n���� 3�� ����� ������ �� = %d", sum);

}