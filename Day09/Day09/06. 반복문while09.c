#include <stdio.h>

int main(void) {
	// �ݺ����� �̿��� ����(��) ���ϱ�
	// ������ �� �ִ� ��
	// - ��� : ȭ��
	// - ���� : �������� �� �� ���� �����Ǵ� ��
	//   - ���ϱ� : 1
	//     result = result * 3; // 1 * 3
	//	   result = result * 6; // (1 * 3) * 6
	//	   result = result * 9; // ((1 * 3) * 6) * 9
	//   - ���ϱ� : 0
	//     result1 = result1 + 1; // 0 + 1
	//	   result1 = result1 + 2; // (0 + 1) + 2
	//	   result1 = result1 + 3; // ((0 + 1) + 2) + 3
	int result = 1;
	int num = 3;
	while (num <= 9) {
		result *= num;
		num += 3;
	}
	int result1 = 0;
	int num1 = 1;
	while (num1 <= 3) {
		result1 = result1 + num1; // 0 + 1
		num1++;
	}
	printf("%d %d\n", result, result1);
	return 0;
}