#include <stdio.h>

int main(void) {
	int arr[7] = { 0 };
	// �ε��� ��ȣ�� �غ��ϴ� ���� ���� �߿��ϴ�.
	printf("%d Bytes\n", sizeof(arr));
	printf("%d Bytes\n", sizeof(int));

	// �迭�� ũ�Ⱚ�� �������� ���ϰ�...
	// �̰� �̿��ؼ� �迭�� �ε����� �����Ѵ�.
	// �迭�� ũ�⸸ �ٲ㵵 ������ �ǵ��� �Ѵ�.
	int size = sizeof(arr) / sizeof(int);
	printf("�迭�� ũ�� : %d\n", size);
	for (int i = 1; i <= size; i += 1) {
		arr[i-1] = 15 * i;
	}
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%d ", arr[i]);
	}
	return 0;
}