#include <stdio.h>

int main(void)
{
	int numarr[7];
	int size = sizeof(numarr) / sizeof(int);
	int check_num = 0;
	while (check_num != size) {
		printf("%d���� �������� �Է¹������� (���� 1 2 3) ����� �����մϴ�. : ", size);
		for (int i = 0; i < size; i++)
		{
			check_num += scanf_s("%d", &numarr[i]);
		}
		if (check_num != size) {
			printf("�߸��� ���Դϴ�!\n");
			rewind(stdin);
		}
	}
	
	
	int plus_numarr = 0;
	for (int i = 0; i < size; i++)
	{
		plus_numarr += numarr[i];
	}
	printf("�Էµ� ������ �� : %d\n", plus_numarr);
	printf("�Էµ� ������ ��� : %.2f\n", plus_numarr / (double)size);


	return 0;
}