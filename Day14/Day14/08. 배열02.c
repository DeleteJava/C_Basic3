#include <stdio.h>

int main(void) {
	// �迭 : ������ �̿��� ���� �ڷᱸ��
	// �������� ���������� ǥ���Ѵ�.
	// �Ǵ� arr(array)
	int num = 0;		// ���� �ϳ��� ����
	int arr[4] = { 0 }; // ���� 4���� ���ÿ� ����
	
	num = 10;	// �ϳ����̴� �ٷ� �ִ´�.
	// arr = 10; // ���� ��ġ�� �䱸�Ѵ�.
	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;

	printf("num : %d\n", num); // �ٷ� �̿밡��
	printf("arr : %d\n", arr); // �ҷ��͵� �������
	printf("arr[0] : %d\n", arr[0]); // ������ �����ؾ� �Ѵ�.

	// ���ڴ� 0������ �ö󰣴�.
	printf("���� 4�� �Է� >> ");
	scanf_s("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);
	printf("result : %d\n", arr[0] + arr[1] + arr[2] + arr[3]);
	return 0;
}