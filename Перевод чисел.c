#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int c;
	printf("������� ����� �� 1 �� 13:");
	scanf("%d", &c);
	switch (c) {
	case 1:
		printf("����");
		break;
	case 2:
		printf("���");
		break;
	case 3:
		printf("���");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("����");
		break;
	case 6:
		printf("�����");
		break;
	case 7:
		printf("����");
		break;
	case 8:
		printf("������");
		break;
	case 9:
		printf("������");
		break;
	case 10:
		printf("������");
		break;
	case 11:
		printf("�����������");
		break;
	case 12:
		printf("����������");
		break;
	case 13:
		printf("����������");
		break;
	default:
		printf("������: ����� ������ ���� �� 1 �� 13");

	}
}