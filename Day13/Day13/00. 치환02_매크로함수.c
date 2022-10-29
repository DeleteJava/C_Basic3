#include <stdio.h>
// 매크로 함수 : 치한기능을 이용하여 만들어낸 연산 코드

// 1. 우측대상 전체에 소괄호 붙인다.
#define calc1(a, b) a + b
#define calc2(a, b) (a + b)

// 2. 우측대상 각각에 소괄호를 붙인다.
#define calc3(a, b) (a * b)
#define calc4(a, b) ((a) * (b))

// 3. 각각의 대상에 대해서는 형변환이 있어야 함
#define calc5(a, b) ((a) + (b))
#define calc6(a, b) (int)( (int)(a) + (int)(b) )

int main(void) {
	int num1 = 14;
	printf("result1-1 : %d\n", calc1(num1, 5) * 3);	//  num1 + 5  *  3
	printf("result1-2 : %d\n", calc2(num1, 5) * 3); // (num1 + 5) *  3
	printf("result2-1 : %d\n", calc3(num1 + 2, 5));	//  (num1 + 2  *  5)
	printf("result2-2 : %d\n", calc4(num1 + 2, 5)); // ((num1 + 2) *  5)
	printf("result3-1 : %.2f\n", calc5(3.5, 9.4));  // (      (3.5) +      (9.4) )
	printf("result3-2 : %d\n", calc6(3.5, 9.4));    // (int)( (int)(3.5) + (int)(9.4) )
	return 0;
}