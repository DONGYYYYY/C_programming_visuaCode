#include <stdio.h>

int main()
{
	int month;
	printf("1~12�� �� �Ѱ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &month);

	month <= 6 ? printf("��ݱ��Դϴ�.\n") : printf("�Ϲݱ��Դϴ�.\n");
	return 0;
}