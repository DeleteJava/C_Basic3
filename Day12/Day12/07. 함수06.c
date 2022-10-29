#include <stdio.h>

void program1(void) { // 4형식 : 명사
	int num1; int num2; int result;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;
	printf("합 : %d\n", result);	
}
int get_sum(void) { // 3형식부터는 동사
	int num1; int num2; int result;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;
	return result;
}
// 2형식
// - 매개변수 : 함수가 실행될 때, 전달해주는 값이 있다면
//             그 값을 복사해서 초기화되는 변수
// 만들어지는 위치는 함수내부이며, 외부에서 사용불가
void show_result(int num1, int num2) {
	// 매개변수는 호출할 때 넣어주는 값으로만 초기화 가능
	// 그 외 불가....
	printf("합 : %d\n", num1 + num2);
}
int main(void) {
	// 4형식 : 독립프로그램!
	// program1();
	// 3형식 : 정보를 만들어내는 기능/동작!
	// printf("복사받아 출력한 두 수의 합 : %d\n", program2());
	// 2형식 : 외부로부터 값에 의해서만 간섭받는 함수
	int num = 0;
	printf("정수 하나 입력 >> ");
	scanf_s("%d", &num);
	show_result(num, 5);
	return 0;
}