#include <stdio.h>

#define SIZE 6

void checkAverage();
void sortScore();
void print();
void checkGrade();

int count = 0;
int score[100]; // �Լ��� ��ȯ���� ���ϱ� ������ (�����Ͱ��� ���� ����)
				// ���� �Լ��� ���������� ������� �ʰ� ���ο��� ���� �� �̿��Ѵٸ�
				// ���ϰ��� �迭�� ���� �ʴ� ������ �Լ��� �Ű������� �迭�� �����Ͽ� ��밡��
				// �׷��ٸ� �迭�� �Է¹޴� �κ��� �Լ��� ���� �ʰ� main�� �ȿ��� �����ؾ���

void main(void) {

	int size, i;

	checkAverage();
	printf("\t%s\n", "���� ��");
	print();
	sortScore();
	printf("\t%s\n", "�������� ���� ��");
	print();
	checkGrade();
	return 0;

}

//��� Ȯ�� �Լ�
void checkAverage()
{
	int i, num = 0;
	float avg = 0.0;
	for (count = 0; ; count++)
	{
		printf("���� �Է��Ͻÿ� : (���� �Է½� ����) ");
		scanf_s("%d", &num);
		if (num >= 0)
		{
			score[count] = num;
		}
		else
		{
			printf("�Է� ����\n");
			puts("");
			break;
		}
	}
	for (i = 0; i < count; i++)
	{
		printf("%d ", score[i]);
		avg += (float)score[i];
	}
	printf("��� = %.2f\n", avg / count);
}

//�������� ���� �Լ�
void sortScore()
{
	int max = 0, i, j, tmp;
	for (i = 0; i < count - 1; i++)
	{
		max = 0;
		for (j = i; j < count; j++)
		{
			if (max < score[j])
			{
				max = score[j];
				tmp = j;
			}
		}
		score[tmp] = score[i];
		score[i] = max;
	}
}

//�迭 ��� �Լ�
void print()
{
	for (int i = 0; i < count; i++)
	{
		printf(" %d ", score[i]);
	}
	puts("");
}

//��� Ȯ�� �Լ�
void checkGrade()
{
	int num, i, check;
	while (1)
	{
		printf("����� Ȯ���ϰ� ���� ������ �Է��Ͻÿ� : (���� �Է½� ����) ");
		scanf_s("%d", &num);
		if (num >= 0)
		{
			check = 0;
			for (i = 0; i < count; i++)
			{
				if (num == score[i])
				{
					printf("%d�� ��� = %d��\n", score[i], i + 1);
					break;
				}
				else
				{
					check++;
				}
			}
			if (check == count)
			{
				printf("��ϵ� ������ �ƴմϴ�.\n");
			}
		}
		else
		{
			printf("Ȯ�� ����\n");
			puts("");
			break;
		}
	}
}