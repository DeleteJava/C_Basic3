#include <stdio.h>

int get_sum(void) {
	int num = 0;
	int result = 0;
	printf("정수 하나 입력 >> ");
	scanf_s("%d", &num);
	// return은 조건문으로 선택 가능
	if (num <= 0) return 0;
	else {
		while (num >= 1) {
			result += num;
			num -= 1;
		}
		return result;
	}
}

int main(void) {
	// 함수 : 내 의도대로 만들어 쓴다.
	// main에서 만든다.
	int result = get_sum();
	printf("합 : %d\n", result);
	return 0;
}