#include <stdio.h>

void program1(void) {
	int num1; int num2; int result;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	result = num1 + num2;
	printf("�� : %d\n", result);
}
int get_num(void) {
	int num1;
	printf("���� �Է� >> ");
	scanf_s("%d", &num1);
	return num1;
}
void show_result(int result) {
	printf("�� : %d\n", result);
}
int make_sum(int num1, int num2) {
	return num1 + num2;
}
// �츮�� ���� �Լ��� �ٸ� ���� �Լ� ���ο��� ��� ����
void program2(void) {
	int num1 = get_num();
	int num2 = get_num();
	int result = make_sum(num1, num2);
	show_result(result);
}
int main(void) {
	// 4���� : �������α׷�!
	// program1();
	
	// 3���� : ������ ������ ���/����!
	// printf("����޾� ����� �� ���� �� : %d\n", program2());
	
	// 2���� : �ܺηκ��� ���� ���ؼ��� �����޴� �Լ�
	// int num = 0; printf("���� �ϳ� �Է� >> "); scanf_s("%d", &num);
	// show_result(num, 5);

	// 1���� : �ܺΰ� ������ �ȴٸ��� �߸� ������ �Լ�
	printf("1���� �Լ��� ��� : %d\n", make_sum(10, 25));
	return 0;
}