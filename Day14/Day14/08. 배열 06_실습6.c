#include <stdio.h>

int main(void)
{
	int numarr[7];
	int size = sizeof(numarr) / sizeof(int);
	int check_num = 0;
	while (check_num != size) {
		printf("%d개의 정수값을 입력받으세요 (예※ 1 2 3) 띄어쓰기로 구별합니다. : ", size);
		for (int i = 0; i < size; i++)
		{
			check_num += scanf_s("%d", &numarr[i]);
		}
		if (check_num != size) {
			printf("잘못된 값입니다!\n");
			rewind(stdin);
		}
	}
	
	
	int plus_numarr = 0;
	for (int i = 0; i < size; i++)
	{
		plus_numarr += numarr[i];
	}
	printf("입력된 값들의 합 : %d\n", plus_numarr);
	printf("입력된 값들의 평균 : %.2f\n", plus_numarr / (double)size);


	return 0;
}