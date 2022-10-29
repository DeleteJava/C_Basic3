#include <stdio.h>

int input(void) {
	int data = 0;
	if (scanf_s("%d", &data) == 0) {
		rewind(stdin);
	}
	return data;
}

int main(void) {
	int arr[3] = { 0 };
	int result = 0;
	printf("정수 3개 입력 >> ");
	// scanf_s("%d%d%d", &arr[0], &arr[1], &arr[2]);
	arr[0] = input();
	arr[1] = input();
	arr[2] = input();
	result = arr[0] + arr[1] + arr[2];
	printf("입력받은 값들의 합 : %d\n", result);
	printf("입력받은 값들의 곱 : %d\n", arr[0]*arr[1]*arr[2]);
	printf("입력받은 값들의 합 : %.2f\n", result/3.0);
	return 0;
}