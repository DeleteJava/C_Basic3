#include <stdio.h>

void program1(void) {
	int num1; int num2; int result;
	printf("정수 2개 입력 >> ");		// 자료
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;			// 처리
	printf("합 : %d\n", result);		// 정보
}
// 3형식 : return을 이용해 외부에 간섭할 수 있는 함수
// void : 반환형에서는 외부로 전달하는 값이 없음
//        매개변수에서는 외부로부터 받는 것이 없음2
int program2(void) {
	int num1; int num2; int result;
	printf("정수 2개 입력 >> ");		// 자료
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;			// 처리
	// printf("합 : %d\n", result);
	// 변수가 사라지니, 값만 복사시켜주는 명령어
	// - 안쓰면 임의의 값이 선택되어 나오니 주의
	return result;					// 정보
	// - 함수를 종료시키는 명령어로 사용됨
	// return num1 * num2; 도달 불가
	// 함수에서 값은 하나만 나오니 주의...
}

int main(void) {
	// 4형식 : 독립프로그램!
	// program1();
	printf("복사받아 출력한 두 수의 합 : %d\n", program2());
	return 0;
}