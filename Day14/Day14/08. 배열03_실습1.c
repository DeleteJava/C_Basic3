#include <stdio.h>

int main(void) {
	// �迭���� ��ȣ�� �������� �ʴ´�.
	int arr1[2] = { 0 }; // ���ڸ��� ������ �˾Ƽ� 0���� ä���ش�.
	double arr2[2]; // = { 2.8, 5.6,4.4 }; �ʰ��Ұ�
	arr1[0] = 10;
	arr1[1] = 20;
	arr2[0] = 2.8;
	arr2[1] = 5.6;
	printf("�����迭 : %d %d\n", arr1[0], arr1[1]);
	printf("�Ǽ��迭 : %.1f %.1f\n", arr2[0], arr2[1]);
	printf("�����迭�� ������ �� : %d\n", arr1[0] + arr1[1]);
	printf("�Ǽ��迭�� ������ �� : %.2f\n", arr2[0] * arr2[1]);
	return 0;
}