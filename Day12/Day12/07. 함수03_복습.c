#include <stdio.h>

// 저장되는 것들은 실행될 예정이며
// 실행이 안되면 실체가 없음
void program1(void) {
	int num1; int num2;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("합 : %d\n", num1 + num2);
}

int main(void) {
	// 함수 : 코드를 저장하는 변수
	// 형식은 편의상 구분하여 붙인 것.
	// - 함수가 외부와 상호작용하는 형태에 따라...
	// 1 ~ 4형식까지 존재한다.
	
	// 4형식 : 독립프로그램!
	program1();
	// 실행되면 생기고, 종료되면 없어진다...
	return 0;
}