#include <stdio.h>

int main(void) {
	// 복습문제

	// 내가 입력한 1보다 큰 양의 정수에 대하여
	// 소수 여부를 판별해서 출력하세요.
	// 1 이하의 값은 <소수 판별 대상 외입니다> 라고 출력하고
	// 재입력을 받으세요.
	// 소수 : 1보다 큰 양의 정수이며, 1이하의 것은 대상외입니다.
	//       소수는 약수가 1과 자기자신 밖에 없으며
	//       그 이외에 약수가 하나이상 있으면 소수가 아닙니다.
	int num = 0;
	int count_number = 2;
	int count_quantity = 2;
	while (num < 2) {
		printf("소수여부를 판별할 정수 입력 >> ");
		scanf_s("%d", &num);
		if (num < 2) printf("소수 판별 대상 외입니다.\n");
	}
	// 나오는 결과는 약수입니다/약수가 아닙니다.
	while (count_number <= num/2) {
		if (num % count_number == 0) {
			// printf("%d ", count_number);
			count_quantity++;
			break;
		}
		count_number++;
	}
	// printf("\n%d개의 약수가 있습니다.\n", count_quantity);
	if (count_quantity == 2) printf("소수입니다.\n");
	else printf("소수가 아닙니다.\n");
	return 0;
}