#include <stdio.h>

// 4���� : �������α׷�/�����ڵ带 ����� ����Ѵ�.
void calculator(void) {
	int num1 = 0; int num2 = 0;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("�� : %d\n", num1 + num2);
	printf("�� : %d\n", num1 - num2);
	printf("�� : %d\n", num1 * num2);
	printf("�� : ");
	if (num2 == 0) printf("����Ұ�\n");
	else printf("%d\n", num1 / num2);
}


// main�Լ� : �ٸ� �ڵ��� ���ุ ����ϰ� �ȴ�.
int main(void) {
	calculator();
	return 0;
}