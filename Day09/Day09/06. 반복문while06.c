#include <stdio.h>

int main(void) {
	// 무한반복 : 입력함수와 연계된다.
	// - > 언제 원하는 것이 들어올지 모르니까!
	// - > 입력과 연계한 무한반복의 경우, do ~ while이 좀 더 편할 수 있다.
	// while : 조건문 -> 종속문 -> 조건문 -> ...반복
	// do ~ while : 종속문 -> 조건문 -> 종속문 -> ...반복
	int num1 = 0;
	/*
	while (num1 <= 0) {
		printf("0보다 큰 양수 입력 >> ");
		scanf_s("%d", &num1);
	}
	*/
	// 종속문이 시작된 뒤에, 판별하게 된다.
	// - 종속문이 먼저 시작되니 사용할 경우, 주의....
	do {
		printf("0보다 큰 양수 입력 >> ");
		scanf_s("%d", &num1);
	} while (num1 <= 0);

	// 유한반복 : 입력을 규칙성을 기반으로 하여 진행
	// - 특정 횟수만큼 반복을 돌린다.
	// - 원본 -> 분해 -> 통일 -> 포장
	int num = 10;
	while (num >= 0) {
		printf("%d ", num);
		num -= 2;
	} printf("\n");
	
	// - 규칙성이 없을 때는 어떻게 하는가?
	//   ex) 불변(ㅁ 6개 출력, 약수, 소수)
	//   -> 대다수의 경우 0 또는 1부터 1씩 증가한다.
	// - 준비한 변수는 이미 쓰고 있다. 출력/연산 용도로 목숨걸 필요없음!
	int n1 = 0;
	while (n1 < 10) {
		printf("%d ", n1);
		n1++;
	} printf("\n");
	int n2 = 1;
	while (n2 <= 10) {
		printf("%d ", n2);
		n2++;
	} printf("\n");
	int n3 = 0;
	while (n3 <= 9) {
		printf("%d ", n3);
		n3++;
	} printf("\n");
	int n4 = 1;
	while (n4 < 11) {
		printf("%d ", n4);
		n4++;
	} printf("\n");
	return 0;
}