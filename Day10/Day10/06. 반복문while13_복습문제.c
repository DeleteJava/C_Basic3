#include <stdio.h>

int main(void) {
	// ��������

	// ���� �Է��� 1���� ū ���� ������ ���Ͽ�
	// �Ҽ� ���θ� �Ǻ��ؼ� ����ϼ���.
	// 1 ������ ���� <�Ҽ� �Ǻ� ��� ���Դϴ�> ��� ����ϰ�
	// ���Է��� ��������.
	// �Ҽ� : 1���� ū ���� �����̸�, 1������ ���� �����Դϴ�.
	//       �Ҽ��� ����� 1�� �ڱ��ڽ� �ۿ� ������
	//       �� �̿ܿ� ����� �ϳ��̻� ������ �Ҽ��� �ƴմϴ�.
	int num = 0;
	int count_number = 2;
	int count_quantity = 2;
	while (num < 2) {
		printf("�Ҽ����θ� �Ǻ��� ���� �Է� >> ");
		scanf_s("%d", &num);
		if (num < 2) printf("�Ҽ� �Ǻ� ��� ���Դϴ�.\n");
	}
	// ������ ����� ����Դϴ�/����� �ƴմϴ�.
	while (count_number <= num/2) {
		if (num % count_number == 0) {
			// printf("%d ", count_number);
			count_quantity++;
			break;
		}
		count_number++;
	}
	// printf("\n%d���� ����� �ֽ��ϴ�.\n", count_quantity);
	if (count_quantity == 2) printf("�Ҽ��Դϴ�.\n");
	else printf("�Ҽ��� �ƴմϴ�.\n");
	return 0;
}