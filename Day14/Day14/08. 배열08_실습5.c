#include <stdio.h>

int main(void) {
	// �׷��� �迭 �� ���µ�?
	// - ������ �͵��� �ϳ��� ��� �����ϱ� ���ؼ�.

	// ���α׷� : �ڷ� -> ó�� -> ����
	// ��������غ�
	double score[6] = { 0 };
	double result_sum = 0;
	int size = sizeof(score) / sizeof(double);
	printf("�б� ����(%d�� ����)�� �Է��ϼ���\n>> ", size);
	for (int i = 0; i <= size-1; i += 1) {
		scanf_s("%lf", &score[i]);
	}
	for (int i = 0; i <= size-1; i += 1) {
		result_sum += score[i];
	}
	printf("�Է¹��� ���� : ");
	for (int i = 0; i <= size-1; i += 1) {
		printf("%.1f", score[i]);
		if (i != 5) printf(", ");
	}
	printf("\n������ �� : %.1f\n", result_sum);
	printf("\n������ ��� : %.1f\n", result_sum / size);
	return 0;
}