#include <stdio.h>

int findMax(int, int[]);

int main()
{
	int i, n, num;
	int score[20];
	printf("�Է� ���� N�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		score[i] = num;
	}
	printf("�ִ밪 : %d\n", findMax(n, score));

}

int findMax(int n, int score[])
{
	int m;
	if (n == 0)
	{
		return score[n];
	}
	m = findMax(n - 1, score);
	if (m < score[n])
		return score[n];
	else
		return m;
}