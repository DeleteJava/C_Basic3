#include <stdio.h>

// 함수를 정의한다 : 코드 저장하기
// -> 실행될 예정, 실행된 다음 사용했던 공간을 모두 반납
void program1(void) {
	int num1; int num2;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("두 정수의 합 : %d\n", num1 + num2);
}
int main(void) {
	// 함수호출하기 : 값 불러와서 실행시킨다.
	program1();
	// 코드 정리용도, 프로그램 안에 프로그램을 포함시킬 때.
	program1();
	return 0;
}