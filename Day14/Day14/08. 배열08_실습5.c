#include <stdio.h>

int main(void) {
	// 그래서 배열 왜 쓰는데?
	// - 연관된 것들을 하나로 묶어서 관리하기 위해서.

	// 프로그램 : 자료 -> 처리 -> 정보
	// 저장공간준비
	double score[6] = { 0 };
	double result_sum = 0;
	int size = sizeof(score) / sizeof(double);
	printf("학교 성적(%d개 과목)을 입력하세요\n>> ", size);
	for (int i = 0; i <= size-1; i += 1) {
		scanf_s("%lf", &score[i]);
	}
	for (int i = 0; i <= size-1; i += 1) {
		result_sum += score[i];
	}
	printf("입력받은 성적 : ");
	for (int i = 0; i <= size-1; i += 1) {
		printf("%.1f", score[i]);
		if (i != 5) printf(", ");
	}
	printf("\n성적의 합 : %.1f\n", result_sum);
	printf("\n성적의 평균 : %.1f\n", result_sum / size);
	return 0;
}