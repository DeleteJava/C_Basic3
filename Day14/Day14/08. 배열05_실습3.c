#include <stdio.h>

int main(void) {
	// 배열은 배열변수로는 복사가 안됨...
	// 변수가 아닌 값이 복사가 되어야 하기 때문이다!
	double farr1[4] = { 0 };
	// { } : 초기화목록 : 배열을 선언할 때 넣어줄 값을 구별하기 위한 문법
	double farr2[4];
	printf("실수값 4개 입력 >> ");
	scanf_s("%lf%lf%lf%lf", &farr1[0], &farr1[1], &farr1[2], &farr1[3]);
	// 배열을 복사할려면, 정확하게 인덱스를 붙여서
	// 전부다 하나씩 해야 한다.
	farr2[0] = farr1[0];
	farr2[1] = farr1[1];
	farr2[2] = farr1[2];
	farr2[3] = farr1[3];
	// 복사할려면, 크기가 같아야 한다.
	printf("첫번째\t두번째\n");
	printf("%.2f\t%.2f\n", farr1[0], farr2[0]);
	printf("%.2f\t%.2f\n", farr1[1], farr2[1]);
	printf("%.2f\t%.2f\n", farr1[2], farr2[2]);
	printf("%.2f\t%.2f\n", farr1[3], farr2[3]);
	return 0;
}