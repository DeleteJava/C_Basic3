#include <stdio.h>

int change(int num) {
	if (num % 2 == 0) {
		return num + 1;
	}
	else {
		return  num - 1;
	}
}

int main(void) {
	// �Լ� ���� �� ��
	// 1. ���� ��к��� ���Ѵ�.
	// - �� �Լ��� Ȧ���� 1��ŭ ������ ���� ���´�.
	// - ¦���� 1��ŭ ������ ���� ���´�.
	// 2. �̸� ���� �ڵ�� �Ųٷ� �ö󰡸� �����Ѵ�.
	// 3. ���� �ʿ��ϰ� �Ǿ��� ��, �̸� �غ��� �ҽ�(Source)�� �����Ѵ�.
	// - ����(fscanf) /Ű����(scanf) /����(�Ű�����) �� ����� �� ��...
	printf("���1 : %d\n", change(13));
	printf("���2 : %d\n", change(16));
	printf("���3 : %d\n", change(-16));
	printf("���4 : %d\n", change(-13));
	return 0;
}