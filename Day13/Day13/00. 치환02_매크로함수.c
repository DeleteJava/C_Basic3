#include <stdio.h>
// ��ũ�� �Լ� : ġ�ѱ���� �̿��Ͽ� ���� ���� �ڵ�

// 1. ������� ��ü�� �Ұ�ȣ ���δ�.
#define calc1(a, b) a + b
#define calc2(a, b) (a + b)

// 2. ������� ������ �Ұ�ȣ�� ���δ�.
#define calc3(a, b) (a * b)
#define calc4(a, b) ((a) * (b))

// 3. ������ ��� ���ؼ��� ����ȯ�� �־�� ��
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