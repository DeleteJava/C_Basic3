#include <stdio.h>
// 치환 : 바꿔치기
// - 전처리문중 하나. 소스파일을 직접 건드리는 명령어
// #define A B - A를 B로 바꾼다.
#define 정수 int
#define 아 (
#define 응 )
#define 정중앙 main
#define 프로그램종료  return 0
#define 코드시작 {
#define 코드종료 }
#define 기본값 "아응"
#define 출력 printf

정수 정중앙 아 void 응
코드시작
	// 값 -> 복사 -> 매개변수 -> 함수동작 -> 값 -> 복사 -> 외부
	// 단순연산이 반복되어도 함수로 하는게 좋지만...
	// 너무 많이 사용되면 느려터진 속도가 나온다.
	출력 아 기본값 응;


	프로그램종료;
코드종료