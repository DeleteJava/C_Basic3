#include <stdio.h>

double input(void) {
	double data;
	scanf_s("%lf", &data);
	return data;
}

int main(void) {
	// �迭�� �� ������ �ݺ�, �̸� �̿��� ������ ��Ű�� ���� ��
	// �迭�� ũ��� ����� ������ ������߸� �Ѵ�.
	double farr1[4] = { 0 };
	double farr2[4] = { 0 };

	// ���ÿ��� ������ �ִ� ���� �ҷ��ͼ� �̿��� �� �ִ�.
	// �����������߸� �Ѵ�.
	printf("�Ǽ��� 4�� �Է� >> ");
	for (int i = 0; i <= 3; i += 1) {
		farr1[i] = input();
	}
	for (int i = 0; i <= 3; i += 1) {
		farr2[i] = farr1[i];
	}
	printf("ù��°\t�ι�°\n");
	for (int i = 0; i <= 3; i += 1) {
		printf("%.2f\t%.2f\n", farr1[i], farr2[i]);
	}
	return 0;
}