#include <stdio.h>

int main(void) {
	int num;
	int result;
	int start = 0;
	int limit;
	while (start <= 0) {
		printf("��� �Է� >> ");
		scanf_s("%d", &start);
	}
	num = start;
	result = 0;
	// �򿬻� : ���� �ٻ簪�� ���Ѵ�.
	limit = (10 / start) * start;
	// �Ǽ������� �ƴϱ� ������ ���� ���ϰ�, ���ϸ� ���� ū ����� ���´�.
	while (num <= limit) {
		result += num;
		num += start;
	}
	printf("\n1���� 10���� %d�� ����� : %d\n", start, result);
	return 0;
}