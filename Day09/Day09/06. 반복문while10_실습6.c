#include <stdio.h>

int main(void) {
	int num;
	int result;
	int start = 0;
	int limit;
	while (start <= 0) {
		printf("배수 입력 >> ");
		scanf_s("%d", &start);
	}
	num = start;
	result = 0;
	// 몫연산 : 제일 근사값을 구한다.
	limit = (10 / start) * start;
	// 실수연산이 아니기 때문에 몫을 구하고, 곱하면 가장 큰 배수가 나온다.
	while (num <= limit) {
		result += num;
		num += start;
	}
	printf("\n1부터 10까지 %d의 배수합 : %d\n", start, result);
	return 0;
}