#include <stdio.h>

void inputNumber();
void printToX(int, int);
int main()
{
	inputNumber();
	return 0;
}

void inputNumber()
{
	int number, changeNumber;
	printf("10���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &number);
	printf("������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &changeNumber);
	printf("======================================\n");
	printf("10���� -> %d���� = ", changeNumber);
	printToX(number, changeNumber);
	puts("");
}

void printToX(int number, int changeNumber)
{
	if (changeNumber == 2 || changeNumber == 8 || changeNumber == 16)
	{
		if (number < changeNumber)
		{
			if (number < 10)
			{
				printf("%d", number);
			}
			else
			{
				printf("%c", (number + 55));
			}
		}
		else
		{
			printToX(number / changeNumber, changeNumber);
			if (number%changeNumber < 10)
			{
				printf("%d", number%changeNumber);
			}
			else
			{
				printf("%c", (number%changeNumber + 55));
			}
		}
	}
	else
		printf("�������� �ʴ� ������ȯ�� �Է��ϼ̽��ϴ�.\n");

}