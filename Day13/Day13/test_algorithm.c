#include <stdio.h>

int checker(int num) {
	int judge = 1;
	int standard = num % 10;
	for (int compare = num / 10; compare != 0; compare = compare / 10) {
		if (compare % 10 != standard) {
			// 문제있음
			judge = 0;
			break;
		}
	}
	return judge;
}

int main(void) {
	for (int i = 10; i <= 1000000; i += 1) {
		if (checker(i)) printf("%d ", i);
	} printf("\n");
	/*
	int start = 10;
	int end = 100;
	while (end <= 1000000) {
		for (int num = start + 1; num <= end; num += start+1 ) {
			printf("%d ", num);
		} printf("\n");
		start += 1;
		start *= 10;
		end *= 10;
	}
	*/
	return 0;
}