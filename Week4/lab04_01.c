#include <stdio.h>
//1������
main()
{
	int i, n, sum;
	printf("���� n���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n, sizeof(n)); // �Է�

	printf("=====while���� ���� 1 ~ n������ �� ���=====\n");
	i = 1, sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("1 ~ n������ �� = %d\n", sum);

	printf("=====for���� ���� 1 ~ n������ �� ���=====\n");

	sum = 0; // sum�� while�ݺ����� ���ؼ� ����� ���� �ֱ� ������ �ʱ�ȭ �۾��� �ʿ�.
	
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("1 ~ n������ �� = %d\n", sum);
}