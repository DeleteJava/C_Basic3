#include <stdio.h>

int main(void) {
	// ��1 : ���� ���� �ִٰ� ������ �ߺ�ó���ϸ�
	//     *2�� �Ǵ� ȿ���� ����ϴ�.
	// ��2 : �Է¹޴� ���� ���� ��� ��� �����ϸ� ������
	//      ���� ���� �մϴ�.

	// ����� �ߺ�ó�� ��� ���̴�.
	int value = 0;
	int num;
	while (value <= 0) {
		printf("����� ��� �Է� >> ");
		scanf_s("%d", &value);
	}
	num = value;
	while (num <= 30) {
		printf("%d ", num);
		num += value;
	}
	return 0;
}