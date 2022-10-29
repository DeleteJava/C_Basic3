#include <stdio.h>

int main(void) {
	// while 무한반복문제
	// 10보다 코고 20보다 작거나 같은 정수만 통과하고
	// 그 외에는 재입력을 받는 반복문을 구성하세요.
	int num = 0;
	while (num <= 10 || num > 20) {
		printf("11부터 20사이의 숫자를 입력하세요 >> ");
		scanf_s("%d", &num);
		if (num <= 10 || num > 20) printf("말 안들으면 탈출못합니다.\n");
	}
	// for 유한반복문제
	// 위에서 입력받은 값부터 1까지의 짝수만 출력하세요.
	// 거꾸로 내려갑니다. 올라가지 않습니다.
	if (num % 2 != 0) num -= 1;
	printf("짝수목록\n");
	for (int i = num; i >= 2; i -= 2) {
		printf("%d ", i);
	} printf("\n");
	// ex) 13 -> 12 10 8 6 4 2
	// ex) 12 -> 12 10 8 6 4 2
	// ex) 14 -> 14 12 10 8 6 4 2
	// ex) 15 -> 14 12 10 8 6 4 2
	return 0;
}