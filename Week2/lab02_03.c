#include <stdio.h>
//3������
int main()
{
	char ch; // ���� ����
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &ch); // charŸ�� ���� �Է�

	printf("���� : %c , 8���� �ڵ尪 : %o , 10���� �ڵ尪 : %d , 16���� �ڵ尪 : %x", ch, ch, ch, ch);
	//�Է� ���ڿ� ���� char�� / 8����(0) / 10���� / 16����(0x) �� ���
	return 0;
}