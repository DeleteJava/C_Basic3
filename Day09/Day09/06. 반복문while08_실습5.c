#include <stdio.h>

int main(void) {
	// 팁1 : 같은 것이 있다고 무조건 중복처리하면
	//     *2가 되는 효과가 생깁니다.
	// 팁2 : 입력받는 것이 있을 경우 어디에 적용하면 좋은지
	//      따로 봐야 합니다.

	// 상수는 중복처리 대상 외이다.
	int value = 0;
	int num;
	while (value <= 0) {
		printf("출력할 배수 입력 >> ");
		scanf_s("%d", &value);
	}
	num = value;
	while (num <= 30) {
		printf("%d ", num);
		num += value;
	}
	return 0;
}