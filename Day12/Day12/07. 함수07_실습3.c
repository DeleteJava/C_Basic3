#include <stdio.h>

void show_bigger(int num1, int num2) {
	// ���� ����Ǳ� ������ �ִ� ������ ���� ���� �ص�
	// ������ �����ȴ�!
	if (num1 == num2) {
		printf("���� ���� �� : ");
	}
	else {
		if (num2 > num1) {
			num1 = num2;
		} 
		printf("�� ū �� : ");
	}
	printf("%d\n", num1);
}

int main(void) {
	int n1 = 20;
	int n2 = 14;
	show_bigger(n1, n1);
	printf("%d %d\n", n1, n2);
	return 0;
}