#include <stdio.h>

int main(void) {
	// for ���� ���ǻ��� : foró�� ����ض�.
	// ���� ����͵� ������, ���߰��� while�� ������ ������
	for (int num1 = 1; num1 <= 9; num1 += 1) {
		for (int num2 = 1; num2 <= 9; num2 += 1) {
			printf("%d x %d = %d\n", num1, num2, num1 * num2);
		} printf("\n");
	}
	// while ���ÿ��� ������ �����ؾ� �Ѵ�...
	// ���ο��� ���� �ݺ��� ���� ������ �����ϰų�
	// �ݵ�� �ʱⰪ�� �ǵ����� ������ �ʿ��ϴ�!
	int num1 = 1;
	int num2 = 1;
	while (num1 <= 9) {
		while (num2 <= 9) {
			printf("%d x %d = %d\n", num1, num2, num1 * num2);
			num2 += 1;
		}
		printf("\n");
		num1 += 1;
		num2 = 1;
	}
	return 0;
}