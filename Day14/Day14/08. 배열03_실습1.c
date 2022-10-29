#include <stdio.h>

int main(void) {
	// 배열끼리 번호는 공유하지 않는다.
	int arr1[2] = { 0 }; // 모자르게 넣으면 알아서 0으로 채워준다.
	double arr2[2]; // = { 2.8, 5.6,4.4 }; 초과불가
	arr1[0] = 10;
	arr1[1] = 20;
	arr2[0] = 2.8;
	arr2[1] = 5.6;
	printf("정수배열 : %d %d\n", arr1[0], arr1[1]);
	printf("실수배열 : %.1f %.1f\n", arr2[0], arr2[1]);
	printf("정수배열의 값들의 합 : %d\n", arr1[0] + arr1[1]);
	printf("실수배열의 값들의 곱 : %.2f\n", arr2[0] * arr2[1]);
	return 0;
}