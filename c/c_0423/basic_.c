#include <stdio.h> // stdio.h 헤더파일 포함

int main(void) //main 함수의 시작
{
	/*
		printf 함수는 모니터로 출려글 하는 경우에 쓴다.
		인자로 문자열을 전달하면 문자열을 출력한다.
	*/

	//2장
	
	//기본
	printf(" - 기본 - \n");
	printf("Hello, World! \n\n"); // 모니터로 문자열 출력

	//문제1
	printf(" - 문제1 - \n");
	printf("송예림\n");
	printf("송 예림\n");
	printf("송 예 림\n\n");

	//문제2
	printf(" - 문제2 - \n");
	printf("송예림\n");
	printf("방배동\n");
	printf("01031893944\n\n");

	//43page
	printf(" - 43 페이지 - \n");
	printf("Hello Everybody \n");
	printf("%d \n", 1234);
	printf("%d %d \n\n", 10, 20);

	//45page
	printf(" - 45 페이지 - \n");
	printf("My age : %d \n", 20);
	printf("%d is my point \n", 100);
	printf("Good \nmorning\neverybody\n\n");

	//문제3
	printf(" - 문제3 - \n");
	printf("제 이름은 송예림입니다. \n");
	printf("제 나이는 %d이고요. \n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n\n",123,456);

	//문제4
	printf(" - 문제4 - \n");
	printf("4X5 = %d \n",20);
	printf("7X9 = %d \n\n", 63);

	//3장 

	//52page
	/*printf(" - 52 페이지 - \n");

	int num1, num2;
	int num3 = 30, num4 = 40;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	num1 = 10;
	num2 = 20;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf(" num3 : %d, num4 : %d\n\n", num3, num4);*/

	//56page 
	printf(" - 56 페이지 - \n");

	int result;
	result = 3 + 4;
	printf("덧셈 결과 : %d\n", result);
	printf("%d 더하기 %d는 %d 입니다.\n", 3, 4, result);
	printf("변수 result에 저장된 값 : %d\n\n", result);

	return 0; // 0을 반환한다.
} //메인 함수의 끝