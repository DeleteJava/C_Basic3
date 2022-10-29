#include <stdio.h>

int main(void) {
	// 약수를 볼려면 전부 다 나눠서 약수인지 확인해야 합니다.
	int num = 0; int mod = 1;
	printf("볼려는 양의 정수 입력 >> ");
	scanf_s("%d", &num);

	// 반복문의 역할
	// 코드를 반복시킨다. 약수여부 판별은 관심없음.
	// 코드가 반복되며 필요한 숫자가 있으니, 이를 준비해준다.
	printf("약수 목록 : ");
	if (num <= 0) {
		printf("없음\n");
	}
	else {
		while (mod <= num) { // - while은 숫자만 준비가 되도록 해준다.
			// 종속문은 복잡해진다.
			if (num % mod == 0) printf("%d ", mod);
			mod += 1;
		}
		/*
		if (num % 1 == 0) { // 이 때 이 조건식은
			printf("%d ", 1);
		}
		if (num % 2 == 0) { // 반복문의 조건식이 될 수 없습니다.
			printf("%d ", 2);
		}
		if (num % 3 == 0) { // 무한반복이 아닌 이상
			printf("%d ", 3);
		}
		if (num % 4 == 0) { // 유한반복의 조건식은 일정하게 유지가
			printf("%d ", 4);
		}
		if (num % 5 == 0) { // 되는 형태입니다.
			printf("%d ", 5);
		}
		if (num % 6 == 0) {
			printf("%d ", 6);
		}
		*/
	}
	return 0;
}