#include <stdio.h>
// 실습1 - 1미만은 0으로 처리합니다.
// - 전달받은 값으로 팩토리얼값을 구하고
//   이를 출력하는 함수를 정의하세요.
//   값은 밖으로 나오지 않습니다.
void show_factorial(int num) {
	if (num < 1) printf("결과 : %d\n", 0);
	else {
		int result = 1;
		// 1은 아무리 많이 곱해도 1입니다. 굳이 1까지 갈 필요없고
		// 1을 반복돌려서 곱할 필요도 없습니다.
		while(num > 1) {
			result *= num;
			num -= 1;
		}
		printf("결과 : %d\n", result);
	}
}
// 실습2 - 범위 외의 값이면 0으로 처리합니다.
// - 1부터 100까지의 정수중 내가 입력한 배수의 합만
//   구해서 외부에서 쓸 수 있도록 해주는 함수를 정의하세요.
//   외부로부터 값은 전달받지 않습니다.
int get_specific_sum(void) {
	int num = 0;
	printf("합을 구할 배수 입력 >> ");
	scanf_s("%d", &num);
	if (num < 1 || num>100) {
		return 0;
	}
	else {
		// 정수는 수치연산은 기본이고, 연동되는 것들이 아주 다양하다.
		int result = 0;
		// 몫 : 실수값의 정수부가 아닌, 그 수가 몇개 있는가? 라는 수량도 된다.
		for (int i = 100 / num; i > 0; i--) {
			result += i * num;
		}
		return result;
	}
}
// 실습3 - 음수/양수 가리지 않지만 약수는 양수로만 체크합니다.
//      - 0은 약수가 없습니다.
// - 내가 전달한 정수에 대해서 약수의 수량을 구해주는 함수를
//   정의하세요.
//   외부로부터 값을 받아, 외부로 값을 쓸 수 있도록 줍니다.
int count_mod(int num) {
	int count = 0;
	if (num == 0) return count;
	else {
		if (num < 0) {
			num *= -1;
		}
		for (int i = 1; i <= num; i += 1) {
			if (num % i == 0) {
				count += 1;
			}
		}
		return count;
	}
}

int main(void) {
	show_factorial(5);
	show_factorial(3);
	show_factorial(0);
	printf("배수의 합 : %d\n", get_specific_sum(5));
	printf("배수의 합 : %d\n", get_specific_sum(5));
	printf("배수의 합 : %d\n", get_specific_sum(0));
	printf("%d의 약수의 수량 : %d개\n", 8, count_mod(8));
	printf("%d의 약수의 수량 : %d개\n", -8, count_mod(-8));

	return 0;
}