#include <stdio.h>

int main(void) {
	int arr[7] = { 0 };
	// 인덱스 번호를 준비하는 것이 제일 중요하다.
	printf("%d Bytes\n", sizeof(arr));
	printf("%d Bytes\n", sizeof(int));

	// 배열의 크기값을 연산으로 구하고...
	// 이걸 이용해서 배열의 인덱스를 통제한다.
	// 배열의 크기만 바꿔도 연동이 되도록 한다.
	int size = sizeof(arr) / sizeof(int);
	printf("배열의 크기 : %d\n", size);
	for (int i = 1; i <= size; i += 1) {
		arr[i-1] = 15 * i;
	}
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%d ", arr[i]);
	}
	return 0;
}