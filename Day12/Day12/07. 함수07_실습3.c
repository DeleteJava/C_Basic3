#include <stdio.h>

void show_bigger(int num1, int num2) {
	// 값은 복사되기 때문에 있는 변수로 무슨 짓을 해도
	// 원본이 보존된다!
	if (num1 == num2) {
		printf("서로 같은 값 : ");
	}
	else {
		if (num2 > num1) {
			num1 = num2;
		} 
		printf("더 큰 값 : ");
	}
	printf("%d\n", num1);
}

int main(void) {
	int n1 = 20;
	int n2 = 14;
	show_bigger(n1, n1);
	printf("%d %d\n", n1, n2);
	return 0;
}