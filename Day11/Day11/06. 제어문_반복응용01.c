#include <stdio.h>

int main(void) {
	// ���߹ݺ��� : �ݺ��� ��ø�Ǿ� �ִ� �ݺ���
	// - ���Ϲݺ����� �ذ��� �Ǹ� �ϸ� �ȴ�.
	int count = 0;
	int limit = 1;
	for (int i = 1; i <= 36; i += 1) {
		printf("%3d", i);
		count += 1;
		if (count == limit) {
			printf("\n");
			count = 0;
			limit += 1;
		}
	}
	int num1 = 1;
	for (int y = 1; y <= 10; y += 1) {
		for (int x = 1; x <= y; x += 1) {
			printf("%3d", num1);
			num1++;
		} printf("\n");
	}
	return 0;
}