#include <stdio.h>

int main(void) {
	for (int num1 = 0; num1 <= 2; num1 += 1) {
		for (int num2 = 1; num2 <= 3; num2 += 1) {
			printf(" %d", num2 + 3 * num1);
		} printf("\n");
	}
	// while�� ���ѹݺ��� �ʿ��� ���� �ƴϸ� �� �Ⱦ���.
	int num1 = 0;
	while ( num1 <= 2 ) {
		int num2 = 1;
		while ( num2 <= 3 ) {
			printf(" %d", num2 + 3 * num1);
			num2 += 1;
		} printf("\n");
		num1 += 1;
	}
	return 0;
}