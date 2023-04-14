#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	printf("정수 3개를 입력하세요 >> ");
	scanf("%d %d %d", &a ,&b ,&c);

	if (a < b && a < c) {
		printf("가장 적은 정수는 %d 입니다.", a);
	}
	else if (b < a && b < c) {
		printf("가장 적은 정수는 %d 입니다.", b);
	}
	else if (c < a && c < b) {
		printf("가장 적은 정수는 %d 입니다.", c);
	}
	else {
		printf("지원되지 않습니다.");
	}
	return 0;
}



/*int main(void) {

	int a, b, c;
	printf("정수 3개를 입력하세요 >> ");
	scanf("%d %d %d", &a, &b, &c);

	if ((b < a && a < c) || (c < a && a < b)) {
		printf("중간 정수는 %d 입니다.", a);
	}
	else if ((a < b && b < c) || (c < b && b < a)) {
		printf("중간 정수는 %d 입니다.", b);
	}
	else if ((a < c && c < b) || (b < c && c < a)) {
		printf("중간 정수는 %d 입니다.", c);
	}
	else {
		printf("지원되지 않습니다.");
	}
	return 0;
} */