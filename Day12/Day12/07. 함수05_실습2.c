#include <stdio.h>

int get_sum(void) {
	int num = 0;
	int result = 0;
	printf("���� �ϳ� �Է� >> ");
	scanf_s("%d", &num);
	// return�� ���ǹ����� ���� ����
	if (num <= 0) return 0;
	else {
		while (num >= 1) {
			result += num;
			num -= 1;
		}
		return result;
	}
}

int main(void) {
	// �Լ� : �� �ǵ���� ����� ����.
	// main���� �����.
	int result = get_sum();
	printf("�� : %d\n", result);
	return 0;
}