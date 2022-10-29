#include <stdio.h>

int main(void) {
	// 보조제어문
	// - 종속문 단계에서, 반복의 재시작/종료를 통제한다.
	// 좋은 점 : 반복을 중간에 멈추거나, 필요없는 것은 건너뛴다.
	// 좋지 않은 점 : 들어가면 코드가 복잡해진다.
	
	// 사용예시 : 메뉴 구현시...
	int menu = 1;
	while (menu != 3) {
		printf("1. HELLO! / 2. GOOD BYE! / 3. 종료!\n>> ");
		scanf_s("%d", &menu);
		if (menu == 3) {
			printf("종료!\n\n");
			break; // 중간에 종료시키는 보조제어문
		}
		if (menu < 1 || menu>2) {
			printf("잘못된 입력입니다!\n");
			continue; // 반복을 재시작(다음회차)시킨다.
		}
		if (menu == 1) printf("HELLO!\n\n");
		else printf("GOOD BYE!\n\n");
	}
	return 0;
}