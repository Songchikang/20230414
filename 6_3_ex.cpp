#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	printf("���� 3���� �Է��ϼ��� >> ");
	scanf("%d %d %d", &a ,&b ,&c);

	if (a < b && a < c) {
		printf("���� ���� ������ %d �Դϴ�.", a);
	}
	else if (b < a && b < c) {
		printf("���� ���� ������ %d �Դϴ�.", b);
	}
	else if (c < a && c < b) {
		printf("���� ���� ������ %d �Դϴ�.", c);
	}
	else {
		printf("�������� �ʽ��ϴ�.");
	}
	return 0;
}



/*int main(void) {

	int a, b, c;
	printf("���� 3���� �Է��ϼ��� >> ");
	scanf("%d %d %d", &a, &b, &c);

	if ((b < a && a < c) || (c < a && a < b)) {
		printf("�߰� ������ %d �Դϴ�.", a);
	}
	else if ((a < b && b < c) || (c < b && b < a)) {
		printf("�߰� ������ %d �Դϴ�.", b);
	}
	else if ((a < c && c < b) || (b < c && c < a)) {
		printf("�߰� ������ %d �Դϴ�.", c);
	}
	else {
		printf("�������� �ʽ��ϴ�.");
	}
	return 0;
} */