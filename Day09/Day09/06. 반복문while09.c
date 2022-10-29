#include <stdio.h>

int main(void) {
	// 반복문을 이용한 누적(합) 구하기
	// 누적될 수 있는 곳
	// - 출력 : 화면
	// - 연산 : 연산했을 때 그 값이 유지되는 것
	//   - 곱하기 : 1
	//     result = result * 3; // 1 * 3
	//	   result = result * 6; // (1 * 3) * 6
	//	   result = result * 9; // ((1 * 3) * 6) * 9
	//   - 더하기 : 0
	//     result1 = result1 + 1; // 0 + 1
	//	   result1 = result1 + 2; // (0 + 1) + 2
	//	   result1 = result1 + 3; // ((0 + 1) + 2) + 3
	int result = 1;
	int num = 3;
	while (num <= 9) {
		result *= num;
		num += 3;
	}
	int result1 = 0;
	int num1 = 1;
	while (num1 <= 3) {
		result1 = result1 + num1; // 0 + 1
		num1++;
	}
	printf("%d %d\n", result, result1);
	return 0;
}