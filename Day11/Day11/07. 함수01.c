#include <stdio.h>

// �Լ��� �����Ѵ� : �ڵ� �����ϱ�
// -> ����� ����, ����� ���� ����ߴ� ������ ��� �ݳ�
void program1(void) {
	int num1; int num2;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("�� ������ �� : %d\n", num1 + num2);
}
int main(void) {
	// �Լ�ȣ���ϱ� : �� �ҷ��ͼ� �����Ų��.
	program1();
	// �ڵ� �����뵵, ���α׷� �ȿ� ���α׷��� ���Խ�ų ��.
	program1();
	return 0;
}