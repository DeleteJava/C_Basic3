#include <stdio.h>

int main(void) {
	int count = 0;
	printf("����� Ƚ�� >> "); scanf_s("%d", &count);
	
	// for������ �غ��ϴ� ������ �ݺ� ����뵵.
	// - ����� �� �� ������ ����.
	for (int num = 1; num <= count; num++) {
		printf("\"C Language is SIMPLE!(THIS IS A LIE!)\"\n");
	}
	return 0;
}