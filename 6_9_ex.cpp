#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, result;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &x);

	if (x <= 0) {
		result = x* x - 9 * x + 2;
		printf("f(x)�� ���� %lf", result);
	}
	else if (x > 0) {
		result = x * 7 + 2;
		printf("f(x)�� ���� %lf", result);
	}
	else {
		printf("�������� �ʽ��ϴ�.");
	}
	return 0;
}