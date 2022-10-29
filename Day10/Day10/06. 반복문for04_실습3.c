#include <stdio.h>

int main(void) {
	int num = 0;
	while (num < 1 || num>9) {
		printf("구구단 단 입력 >> ");
		scanf_s("%d", &num);
	}
	for (int x = 1; x <= 9; x += 1) {
		printf("%d x %d = %2d\n", num, x, num * x);
	}
	return 0;
}