#include <stdio.h>

int change(int num) {
	if (num % 2 == 0) {
		return num + 1;
	}
	else {
		return  num - 1;
	}
}

int main(void) {
	// 함수 만들 때 팁
	// 1. 먼저 결론부터 정한다.
	// - 이 함수는 홀수면 1만큼 감소한 값이 나온다.
	// - 짝수면 1만큼 증가한 값이 나온다.
	// 2. 이를 직접 코드로 거꾸로 올라가며 구현한다.
	// 3. 값이 필요하게 되었을 때, 이를 준비할 소스(Source)를 선택한다.
	// - 파일(fscanf) /키보드(scanf) /변수(매개변수) 에 저장된 값 등...
	printf("결과1 : %d\n", change(13));
	printf("결과2 : %d\n", change(16));
	printf("결과3 : %d\n", change(-16));
	printf("결과4 : %d\n", change(-13));
	return 0;
}