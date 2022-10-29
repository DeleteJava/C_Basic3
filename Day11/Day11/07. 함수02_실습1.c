#include <stdio.h>

// 4형식 : 개별프로그램/독립코드를 만들어 사용한다.
void calculator(void) {
	int num1 = 0; int num2 = 0;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("합 : %d\n", num1 + num2);
	printf("차 : %d\n", num1 - num2);
	printf("곱 : %d\n", num1 * num2);
	printf("몫 : ");
	if (num2 == 0) printf("연산불가\n");
	else printf("%d\n", num1 / num2);
}


// main함수 : 다른 코드의 실행만 담당하게 된다.
int main(void) {
	calculator();
	return 0;
}