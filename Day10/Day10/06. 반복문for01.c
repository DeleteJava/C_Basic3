#include <stdio.h>

int main(void) {
	// for반복문 : "일단은" 유한반복에만 쓰는 제어문
	int num = 1;
	printf("while\n");
	while (num <= 5) {
		printf("%d ", num);
		num++;
	} printf("\n");

	// for 반복문은 while을 문법상 편하게 재배치만 한 것.
	printf("for\n");
	for (int a = 1; a <= 10; a++) {
		printf("%d ", a);
	} printf("\n");

	// 문법의 특징
	// - 1. 변수를 마음대로 선언할 수 있다.
	//   -> 1회성으로 사용하고 버리기 위해서. 단문자 변수명 가능.
	//   -> 외부에 같은 이름의 변수가 있던 말던 상관없다.
	// - 2. 반복횟수를 보장받는다.
	//   -> 증감식이 별개 단계이기 때문에 얻는 특징
	return 0;
}