#include <stdio.h>

int main(void) {
	// 다중반복문 : 반복이 중첩되어 있는 반복문
	// - 단일반복으로 해결이 되면 하면 된다.
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