#include <stdio.h>

int main(void) {
	int count = 0;
	printf("출력할 횟수 >> "); scanf_s("%d", &count);
	
	// for문에서 준비하는 변수는 반복 제어용도.
	// - 겸사겸사 쓸 수 있으면 쓴다.
	for (int num = 1; num <= count; num++) {
		printf("\"C Language is SIMPLE!(THIS IS A LIE!)\"\n");
	}
	return 0;
}