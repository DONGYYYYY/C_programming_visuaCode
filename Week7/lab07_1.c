#include <stdio.h>

void inputData(int data[][5], int, int);
void printArray(int[][5], int, int);
void findAvgTop(int[][5], int, int);
void findMaxSub(int[][5], int, int);

int main()
{
	int i, j, data[3][5], colsize, rowsize;
	rowsize = sizeof(data) / sizeof(data[0]), colsize = sizeof(data[0]) / sizeof(data[0][0]); // �޸� ������
	/* ����� �Լ� ȣ�� */
	inputData(data, rowsize, colsize);
	printArray(data, rowsize, colsize);
	findAvgTop(data, rowsize, colsize);
	findMaxSub(data, rowsize, colsize);
}
/*����� �Է��� �ϴ� �Լ�*/
void inputData(int data[][5], int rowsize, int colsize)
{
	int i, j;
	printf("�� 3���� �л��� ��,��,��,��,�� �����Է�\n");
	for (i = 0; i < rowsize; i++)
	{
		printf("==%d�� �л� ���� �Է�==\n", i + 1);
		for (j = 0; j < colsize; j++)
		{
			printf(j == 0 ? "���� = " : j == 1 ? " ���� = " : j == 2 ? " ���� = " : j == 3 ? " ���� = " : j == 4 ? " ��ȸ = " : "");
			scanf_s("%d", &data[i][j]);
		}
	}
}
/* �迭�� ����ϴ� �Լ� */
void printArray(int data[][5], int rowsize, int colsize)
{
	int i, j;
	for (i = 0; i < rowsize; i++)
	{
		printf("%d�� �л� ���� : ", i + 1);
		for (j = 0; j < colsize; j++)
		{
			printf(j == 0 ? "���� = " : j == 1 ? " ���� = " : j == 2 ? " ���� = " : j == 3 ? " ���� = " : j == 4 ? " ��ȸ = " : "");
			printf("%d", data[i][j]);
		}
		puts("");
	}
}
/* ��հ��� ���� ū �л��� ã�� �Լ� */
void findAvgTop(int data[][5], int rowsize, int colsize)
{
	int i, j, z;
	double max = 0;
	double avg[] = { 0.0,0.0,0.0 };
	for (i = 0; i < rowsize; i++)
	{
		for (j = 0; j < colsize; j++)
		{
			avg[i] += (double)data[i][j];
		}
		avg[i] /= colsize;
	}
	for (i = 0; i < 3; i++)
	{
		if (avg[i] > max)
		{
			max = avg[i];
			z = i + 1;
		}
	}

	printf("���� ���� ��� ������ ���� %d�� �л��� ��� ���� = %lf\n", z, max);
}

/* ������ ���񿡼� ���� ���� ������ ���� �л��� ��ȣ�� ������ ã�� �Լ� */
void findMaxSub(int data[][5], int rowsize, int colsize)
{
	int i, j;
	int max[] = { 0,0,0,0,0 }; // �ִ� ������ �����ϴ� �迭
	int count[5]; // �ִ� ������ ��� �л��� ��ȣ�� �����ϴ� �迭
	for (j = 0; j < colsize; j++)
	{
		for (i = 0; i < rowsize; i++)
		{
			if (data[i][j] > max[j]) {
				max[j] = data[i][j];
				count[j] = i + 1;
			}
		}
	}
	for (j = 0; j < colsize; j++)
	{
		printf(j == 0 ? "���� : " : j == 1 ? "���� : " : j == 2 ? "���� : " : j == 3 ? "���� : " : j == 4 ? "��ȸ : " : ""); //���� switch���� ���� if�� Ȥ�� switch�����ε� ��� ����!
		printf("%d�� �л��� ���� = %d\n", count[j], max[j]);
	}
}