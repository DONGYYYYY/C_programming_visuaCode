#include <stdio.h>
//2������
#define PI 3.14
int main()
{
	float radius;
	float area;
	float round;
	// ���� 3�� ������ , ����, �ѷ� ����
	printf("�������� �Է��Ͻÿ� : ");
	scanf_s("%f", &radius, 1);//�������� ǥ���Է�

	// ����� ���� �� ������ ����
	area = radius * radius * PI;
	round = 2 * PI * radius;

	//������ ����� ���� ���
	printf("���� ���� : %f\n", area);
	printf("���� �ѷ� : %f\n", round);

	return 0;
}