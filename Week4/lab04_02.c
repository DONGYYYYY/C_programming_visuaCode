#include <stdio.h>
//2������
main()
{
	int n, sum = 0;
	//while�� ���Ǿȿ� scanf_s()�� ����ص� ����.
	while (1)//���� �ݺ�
	{
		printf("����n�� �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		if (n != -1) // -1�� �ԷµǾ��� �� ����
			sum += n;
		else
			break;

	}
	printf("SUM = %d", sum);
}