#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	

	int user, com;
	printf("�����ϼ��� (1 : ���� 2 : ���� 3 : ��) >> ");
	scanf("%d", &user);

	srand(time(NULL));
	com = rand() % 3 + 1;


	if (user == 1) {
		if (com == 1) {
			printf("�����ϴ�.");
		}
		else if (com == 2) {
			printf("��ǻ�Ͱ� �̰���ϴ�.");
		}
		else if (com == 3) {
			printf("����ڰ� �̰���ϴ�.");
		}
		else {
			printf("�߸� �Է� �Ͽ����ϴ�.");
		}
	}
	else if (user == 2) {
		if (com == 1) {
			printf("����ڰ� �̰���ϴ�.");
		}
		else if (com == 2) {
			printf("�����ϴ�.");
		}
		else if (com == 3) {
			printf("��ǻ�Ͱ� �̰���ϴ�.");

		}
		else {
			printf("�߸� �Է� �Ͽ����ϴ�.");
		}
	}
	else if (user == 3) {
		if (com == 1) {
			printf("��ǻ�Ͱ� �̰���ϴ�.");
		}
		else if (com == 2) {
			printf("����ڰ� �̰���ϴ�.");
		}
		else if (com == 3) {
			printf("�����ϴ�");
		}
		else {
			printf("�߸� �Է� �Ͽ����ϴ�.");
		}
	}
	else {
		printf("�߸� �Է� �Ͽ����ϴ�.");
	}
	return 0;
}