#include <stdio.h>
#include <math.h>
//8�� ����
int main()
{
	int i, j, check, size;
	while (1)
	{
		printf("���ϴ� ���� �Է��Ͻÿ� : �ﰢ��(1) , ���ﰢ��(2) , ��ٸ���(3) ,  ����(0) : ");
		scanf_s("%d", &check);
		if (check == 0)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if (check == 1 || check == 2 || check == 3)
		{
			printf("�ﰢ���� ũ�⸦ �Է��ϼ��� : ");
			scanf_s("%d", &size);
			switch (check) {
			case 1:
				for (i = 0; i <= size; i++)
				{
					for (j = -size; j <= size; j++)
					{
						if (i >= abs(j))
							printf("*");
						else
							printf(" ");

					}
					puts("");
				}
				break;
			case 2:
				for (i = size; i >= 0; i--)
				{
					for (j = -size; j <= size; j++)
					{
						if (i >= abs(j))
							printf("*");
						else
							printf(" ");

					}
					puts("");
				}
				break;
			case 3:
				for (i = size / 2; i <= size; i++)
				{
					for (j = -size; j <= size; j++)
					{
						if (i >= abs(j))
							printf("*");
						else
							printf(" ");

					}
					puts("");
				}
				break;
			default:
				break;
			}
		}
		else
		{
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
		}

	}
	return 0;
}