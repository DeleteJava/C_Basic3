#include <stdio.h>

double input(void) {
	double data;
	scanf_s("%lf", &data);
	return data;
}

int main(void) {
	// 배열의 주 목적은 반복, 이를 이용한 연동을 시키기 위한 것
	// 배열의 크기는 선언시 무조건 상수여야만 한다.
	double farr1[4] = { 0 };
	double farr2[4] = { 0 };

	// 사용시에는 변수에 있는 값을 불러와서 이용할 수 있다.
	// 정수변수여야만 한다.
	printf("실수값 4개 입력 >> ");
	for (int i = 0; i <= 3; i += 1) {
		farr1[i] = input();
	}
	for (int i = 0; i <= 3; i += 1) {
		farr2[i] = farr1[i];
	}
	printf("첫번째\t두번째\n");
	for (int i = 0; i <= 3; i += 1) {
		printf("%.2f\t%.2f\n", farr1[i], farr2[i]);
	}
	return 0;
}