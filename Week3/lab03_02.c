#include <stdio.h>

int main()
{
	int money;
	printf("������ �ݾ��� �Է��Ͻÿ�(�ּ� õ������) : ");
	scanf_s("%d", &money);
	/*
	money / 50000 >= 1 ? printf("50000���� %d��,", money / 50000), money %=50000 : printf("50000���� 0��,");
	money / 10000 >= 1 ? printf("10000���� %d��,", money / 10000), money %= 10000 : printf("10000���� 0��,");
	money / 5000 >= 1 ? printf("5000���� %d��,", money / 5000), money %= 5000 : printf("5000���� 0��,");
	money / 1000 >= 1 ? printf("1000���� %d��,", money / 1000), money %= 1000 : printf("1000���� 0��\n");
	*/
	(money / 50000 >= 1 ? (printf("50000���� %d��,", money / 50000), money %= 50000) : printf("50000���� 0��,")),
		(money / 10000 >= 1 ? (printf("10000���� %d��,", money / 10000), money %= 10000) : printf("10000���� 0��,")),
		(money / 5000 >= 1 ? (printf("5000���� %d��,", money / 5000), money %= 5000) : printf("5000���� 0��,")),
		(money / 1000 >= 1 ? (printf("1000���� %d��,", money / 1000), money %= 1000) : printf("1000���� 0��\n"));
	return 0;
}