#include <stdio.h>

int make_exp(int num1, int count) {
	int result = 1;
	if (count <= 0) {
		return result;
	}
	else {
		for (int i = 1; i <= count; i++) {
			result *= num1;
		}
		return result;
	}
}
int main(void) {
	// °ÅµìÁ¦°öÇÔ¼ö
	printf("°á°ú1 : %d\n", make_exp(2, 10));
	return 0;
}