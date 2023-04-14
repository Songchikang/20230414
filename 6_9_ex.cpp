#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, result;

	printf("x의 값을 입력하시오 : ");
	scanf("%lf", &x);

	if (x <= 0) {
		result = x* x - 9 * x + 2;
		printf("f(x)의 값은 %lf", result);
	}
	else if (x > 0) {
		result = x * 7 + 2;
		printf("f(x)의 값은 %lf", result);
	}
	else {
		printf("지원되지 않습니다.");
	}
	return 0;
}