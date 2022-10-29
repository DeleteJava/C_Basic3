#include <stdio.h>

int main(void) {
	// for 사용시 주의사항 : for처럼 사용해라.
	// 변수 끌고와도 되지만, 나중가면 while과 구분이 없어짐
	for (int num1 = 1; num1 <= 9; num1 += 1) {
		for (int num2 = 1; num2 <= 9; num2 += 1) {
			printf("%d x %d = %d\n", num1, num2, num1 * num2);
		} printf("\n");
	}
	// while 사용시에는 변수를 조심해야 한다...
	// 내부에서 내부 반복을 위한 변수를 선언하거나
	// 반드시 초기값을 되돌리는 과정이 필요하다!
	int num1 = 1;
	int num2 = 1;
	while (num1 <= 9) {
		while (num2 <= 9) {
			printf("%d x %d = %d\n", num1, num2, num1 * num2);
			num2 += 1;
		}
		printf("\n");
		num1 += 1;
		num2 = 1;
	}
	return 0;
}