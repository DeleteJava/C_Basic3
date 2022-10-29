#include <stdio.h>
// �ǽ�1 - 1�̸��� 0���� ó���մϴ�.
// - ���޹��� ������ ���丮���� ���ϰ�
//   �̸� ����ϴ� �Լ��� �����ϼ���.
//   ���� ������ ������ �ʽ��ϴ�.
void show_factorial(int num) {
	if (num < 1) printf("��� : %d\n", 0);
	else {
		int result = 1;
		// 1�� �ƹ��� ���� ���ص� 1�Դϴ�. ���� 1���� �� �ʿ����
		// 1�� �ݺ������� ���� �ʿ䵵 �����ϴ�.
		while(num > 1) {
			result *= num;
			num -= 1;
		}
		printf("��� : %d\n", result);
	}
}
// �ǽ�2 - ���� ���� ���̸� 0���� ó���մϴ�.
// - 1���� 100������ ������ ���� �Է��� ����� �ո�
//   ���ؼ� �ܺο��� �� �� �ֵ��� ���ִ� �Լ��� �����ϼ���.
//   �ܺηκ��� ���� ���޹��� �ʽ��ϴ�.
int get_specific_sum(void) {
	int num = 0;
	printf("���� ���� ��� �Է� >> ");
	scanf_s("%d", &num);
	if (num < 1 || num>100) {
		return 0;
	}
	else {
		// ������ ��ġ������ �⺻�̰�, �����Ǵ� �͵��� ���� �پ��ϴ�.
		int result = 0;
		// �� : �Ǽ����� �����ΰ� �ƴ�, �� ���� � �ִ°�? ��� ������ �ȴ�.
		for (int i = 100 / num; i > 0; i--) {
			result += i * num;
		}
		return result;
	}
}
// �ǽ�3 - ����/��� ������ ������ ����� ����θ� üũ�մϴ�.
//      - 0�� ����� �����ϴ�.
// - ���� ������ ������ ���ؼ� ����� ������ �����ִ� �Լ���
//   �����ϼ���.
//   �ܺηκ��� ���� �޾�, �ܺη� ���� �� �� �ֵ��� �ݴϴ�.
int count_mod(int num) {
	int count = 0;
	if (num == 0) return count;
	else {
		if (num < 0) {
			num *= -1;
		}
		for (int i = 1; i <= num; i += 1) {
			if (num % i == 0) {
				count += 1;
			}
		}
		return count;
	}
}

int main(void) {
	show_factorial(5);
	show_factorial(3);
	show_factorial(0);
	printf("����� �� : %d\n", get_specific_sum(5));
	printf("����� �� : %d\n", get_specific_sum(5));
	printf("����� �� : %d\n", get_specific_sum(0));
	printf("%d�� ����� ���� : %d��\n", 8, count_mod(8));
	printf("%d�� ����� ���� : %d��\n", -8, count_mod(-8));

	return 0;
}