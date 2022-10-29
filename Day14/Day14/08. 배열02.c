#include <stdio.h>

int main(void) {
	// 배열 : 변수를 이용해 만들어낸 자료구조
	// 변수명은 복수형으로 표현한다.
	// 또는 arr(array)
	int num = 0;		// 변수 하나를 선언
	int arr[4] = { 0 }; // 변수 4개를 동시에 선언
	
	num = 10;	// 하나뿐이니 바로 넣는다.
	// arr = 10; // 넣을 위치를 요구한다.
	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;

	printf("num : %d\n", num); // 바로 이용가능
	printf("arr : %d\n", arr); // 불러와도 쓸모없음
	printf("arr[0] : %d\n", arr[0]); // 변수를 지정해야 한다.

	// 숫자는 0번부터 올라간다.
	printf("정수 4개 입력 >> ");
	scanf_s("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);
	printf("result : %d\n", arr[0] + arr[1] + arr[2] + arr[3]);
	return 0;
}