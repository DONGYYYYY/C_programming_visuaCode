#include <stdio.h>
//7�� ����
int main()
{
	int max, num1, num2, num3;
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		max = num1;
		if (max < num3)
			max = num3;
	}
	else
	{
		max = num2;
		if (max < num3)
			max = num3;
	}
	printf("�ִ밪 = %d\n", max);
}