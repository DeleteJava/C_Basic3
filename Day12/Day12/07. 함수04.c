#include <stdio.h>

void program1(void) {
	int num1; int num2; int result;
	printf("���� 2�� �Է� >> ");		// �ڷ�
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;			// ó��
	printf("�� : %d\n", result);		// ����
}
// 3���� : return�� �̿��� �ܺο� ������ �� �ִ� �Լ�
// void : ��ȯ�������� �ܺη� �����ϴ� ���� ����
//        �Ű����������� �ܺηκ��� �޴� ���� ����2
int program2(void) {
	int num1; int num2; int result;
	printf("���� 2�� �Է� >> ");		// �ڷ�
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;			// ó��
	// printf("�� : %d\n", result);
	// ������ �������, ���� ��������ִ� ��ɾ�
	// - �Ⱦ��� ������ ���� ���õǾ� ������ ����
	return result;					// ����
	// - �Լ��� �����Ű�� ��ɾ�� ����
	// return num1 * num2; ���� �Ұ�
	// �Լ����� ���� �ϳ��� ������ ����...
}

int main(void) {
	// 4���� : �������α׷�!
	// program1();
	printf("����޾� ����� �� ���� �� : %d\n", program2());
	return 0;
}