#include <stdio.h>

int main(void) {
	// do while�� ���� ������ �ʽ��ϴ�.
	int count = 10;
	int num1 = 1;
	while (num1 <= count) {
		printf("%d : HELLO!\n", num1);
		num1++;
	}
	int num2 = 1;
	do {
		printf("%d : HELLO!\n", num2);
		num2++;
	} while (num2 <= count);
	return 0;
}