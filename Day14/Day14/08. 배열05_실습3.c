#include <stdio.h>

int main(void) {
	// �迭�� �迭�����δ� ���簡 �ȵ�...
	// ������ �ƴ� ���� ���簡 �Ǿ�� �ϱ� �����̴�!
	double farr1[4] = { 0 };
	// { } : �ʱ�ȭ��� : �迭�� ������ �� �־��� ���� �����ϱ� ���� ����
	double farr2[4];
	printf("�Ǽ��� 4�� �Է� >> ");
	scanf_s("%lf%lf%lf%lf", &farr1[0], &farr1[1], &farr1[2], &farr1[3]);
	// �迭�� �����ҷ���, ��Ȯ�ϰ� �ε����� �ٿ���
	// ���δ� �ϳ��� �ؾ� �Ѵ�.
	farr2[0] = farr1[0];
	farr2[1] = farr1[1];
	farr2[2] = farr1[2];
	farr2[3] = farr1[3];
	// �����ҷ���, ũ�Ⱑ ���ƾ� �Ѵ�.
	printf("ù��°\t�ι�°\n");
	printf("%.2f\t%.2f\n", farr1[0], farr2[0]);
	printf("%.2f\t%.2f\n", farr1[1], farr2[1]);
	printf("%.2f\t%.2f\n", farr1[2], farr2[2]);
	printf("%.2f\t%.2f\n", farr1[3], farr2[3]);
	return 0;
}