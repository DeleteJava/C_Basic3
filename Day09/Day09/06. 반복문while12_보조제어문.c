#include <stdio.h>

int main(void) {
	// �������
	// - ���ӹ� �ܰ迡��, �ݺ��� �����/���Ḧ �����Ѵ�.
	// ���� �� : �ݺ��� �߰��� ���߰ų�, �ʿ���� ���� �ǳʶڴ�.
	// ���� ���� �� : ���� �ڵ尡 ����������.
	
	// ��뿹�� : �޴� ������...
	int menu = 1;
	while (menu != 3) {
		printf("1. HELLO! / 2. GOOD BYE! / 3. ����!\n>> ");
		scanf_s("%d", &menu);
		if (menu == 3) {
			printf("����!\n\n");
			break; // �߰��� �����Ű�� �������
		}
		if (menu < 1 || menu>2) {
			printf("�߸��� �Է��Դϴ�!\n");
			continue; // �ݺ��� �����(����ȸ��)��Ų��.
		}
		if (menu == 1) printf("HELLO!\n\n");
		else printf("GOOD BYE!\n\n");
	}
	return 0;
}