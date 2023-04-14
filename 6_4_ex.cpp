#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	

	int user, com;
	printf("선택하세요 (1 : 가위 2 : 바위 3 : 보) >> ");
	scanf("%d", &user);

	srand(time(NULL));
	com = rand() % 3 + 1;


	if (user == 1) {
		if (com == 1) {
			printf("비겼습니다.");
		}
		else if (com == 2) {
			printf("컴퓨터가 이겼습니다.");
		}
		else if (com == 3) {
			printf("사용자가 이겼습니다.");
		}
		else {
			printf("잘못 입력 하였습니다.");
		}
	}
	else if (user == 2) {
		if (com == 1) {
			printf("사용자가 이겼습니다.");
		}
		else if (com == 2) {
			printf("비겼습니다.");
		}
		else if (com == 3) {
			printf("컴퓨터가 이겼습니다.");

		}
		else {
			printf("잘못 입력 하였습니다.");
		}
	}
	else if (user == 3) {
		if (com == 1) {
			printf("컴퓨터가 이겼습니다.");
		}
		else if (com == 2) {
			printf("사용자가 이겼습니다.");
		}
		else if (com == 3) {
			printf("비겼습니다");
		}
		else {
			printf("잘못 입력 하였습니다.");
		}
	}
	else {
		printf("잘못 입력 하였습니다.");
	}
	return 0;
}