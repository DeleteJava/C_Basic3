#include <stdio.h>

void program1(void) {
	int num1; int num2; int result;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;
	printf("합 : %d\n", result);
}
int get_num(void) {
	int num1;
	printf("정수 입력 >> ");
	scanf_s("%d", &num1);
	return num1;
}
void show_result(int result) {
	printf("합 : %d\n", result);
}
int make_sum(int num1, int num2) {
	return num1 + num2;
}
// 우리가 만든 함수는 다른 만든 함수 내부에서 사용 가능
void program2(void) {
	int num1 = get_num();
	int num2 = get_num();
	int result = make_sum(num1, num2);
	show_result(result);
}
int main(void) {
	// 4형식 : 독립프로그램!
	// program1();
	
	// 3형식 : 정보를 만들어내는 기능/동작!
	// printf("복사받아 출력한 두 수의 합 : %d\n", program2());
	
	// 2형식 : 외부로부터 값에 의해서만 간섭받는 함수
	// int num = 0; printf("정수 하나 입력 >> "); scanf_s("%d", &num);
	// show_result(num, 5);

	// 1형식 : 외부가 없으면 팔다리가 잘린 상태인 함수
	printf("1형식 함수의 결과 : %d\n", make_sum(10, 25));
	return 0;
}