#include <stdio.h>

void program1(void) { // 4���� : ���
	int num1; int num2; int result;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;
	printf("�� : %d\n", result);	
}
int get_sum(void) { // 3���ĺ��ʹ� ����
	int num1; int num2; int result;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;
	return result;
}
// 2����
// - �Ű����� : �Լ��� ����� ��, �������ִ� ���� �ִٸ�
//             �� ���� �����ؼ� �ʱ�ȭ�Ǵ� ����
// ��������� ��ġ�� �Լ������̸�, �ܺο��� ���Ұ�
void show_result(int num1, int num2) {
	// �Ű������� ȣ���� �� �־��ִ� �����θ� �ʱ�ȭ ����
	// �� �� �Ұ�....
	printf("�� : %d\n", num1 + num2);
}
int main(void) {
	// 4���� : �������α׷�!
	// program1();
	// 3���� : ������ ������ ���/����!
	// printf("����޾� ����� �� ���� �� : %d\n", program2());
	// 2���� : �ܺηκ��� ���� ���ؼ��� �����޴� �Լ�
	int num = 0;
	printf("���� �ϳ� �Է� >> ");
	scanf_s("%d", &num);
	show_result(num, 5);
	return 0;
}