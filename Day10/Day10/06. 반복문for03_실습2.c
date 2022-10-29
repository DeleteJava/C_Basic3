#include <stdio.h>

int main(void) {
	// 문자기반 입출력인터페이스 : 콘솔
	// -> 출력은 언제나 왼쪽에서 오른쪽으로...
	// \n이 발생하면 이전 출력내용으로 돌아갈 수 없음
	
	int num2 = 1; // 외부에서 필요해서 준비한 변수
	for (int num1 = 1; num1 <= 10; num1 = num1 + 1) {
		// num1은 반복 통제용도인데, 겸사겸사 출력!
		printf("%2d회차 : %2d\n", num1, num2);
		num2 += 2;
	}

	return 0;
}