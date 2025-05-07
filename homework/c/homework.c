
#include <stdio.h>

int two_multi(int num);//2의 승수의 결과값 도출하는 재귀함수

int main()
{
	//도전 1번
	//int num; //입력받을 정수
	//
	//printf("정수를 입력해 주세요 : ");
	//scanf_s("%d", &num);
	//printf("16진수로 변환 -> %x", num);

	//도전 2번
	int num1, num2; //입력받을 정수
	int big, small;	//정수 크기 구분 
	printf("정수 2개를 입력해 주세요 : ");
	scanf_s("%d %d", &num1, &num2);
	//입력받은 정수의 크기를 구분하도록 함
	if (num1 > num2) 
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}
	//작은 단부터 순서대로 구구단 출력
	//for (int i = small; i < big+1; i++)
	//{
	//	for (int j = 1; j < 10; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}
	//도전 3번 
	//int num1, num2; //입력받을 정수
	//int n=1;		//나머지, while 조건문에 걸리지 않기위해 1로 초기화
	//
	//printf("두 개의 정수 입력 : ");
	//scanf_s("%d %d", &num1, &num2);
	//
	//while (n!=0)	//n이 0이 될때까지 나머지를 구함 = 최대 공약수를 구하기 위함
	//{
	//	n = num1 % num2;
	//	num1 = num2;
	//	num2 = n;
	//}
	//printf("두 수의 최대공약수 : %d", num1);
	//도전 4번
	//int bread = 500;	//빵
	//int snack = 700;	//과자
	//int cock  = 400;	//콜라
	//int money = 3500;	//소지금
	//소지금에서 한 물건을 살수 있는 최대 한도를 구함
	//int b_m = money / bread;
	//int s_m = money / snack;
	//int c_m = money / cock;
	//
	//int total; //조합이 맞는지 틀리는 지 구분
	//조합생성기 
	//ex. b=1 빵을 한개살때, 
	//	  s=1 과자를 한개살때, 
	//	  c=1 콜라를 한개 살때
	//	  total = 1400 이므로 if조건에 false라서 아무것도 출력되지 않고
	//	  다시 맨처음 for문으로 가 b = 2 부터 시작 
	//	  이런식으로 합이 3500인 조합을 출력
	//for (int b = 1; b < b_m; b++)
	//{
	//	for (int s = 1; s < s_m; s++)
	//	{
	//		for (int c = 1; c < c_m; c++)
	//		{
	//			total = bread * b + snack * s + cock * c;
	//			if (total == money)
	//			{
	//				printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n",b,s,c);
	//			}
	//		}
	//	}
	//}
	//printf("어떻게 구입하시겠습니까?");
	////도전 5번 
	//int num = 2;	//1은 소수가 아니니까 2부터 검사
	//int p_num[10];	//10개만 출력하라고 했으니까 크기가 10인 배열 선언
	//0으로 초기화한 이유 = 조건이 참일 때를 세야하니까 0부터 시작
	//int cnt = 0;	//1과 자기자신일때만 나머지가 0인지 검출
	//int p_cnt = 0;	//검출된 소수를 세는 것
	//while (1)	//0이 아닌 상수 = 무한루프 
	//{
	//	1부터 자기자신까지 나눈 나머지를 검사
	//	for (int i = 1; i < num+1; i++)
	//	{
	//		if (num % i == 0)
	//			cnt++; //나머지가 0이면 증가
	//	}
	//	if (cnt == 2)
	//	{
	//		p_cnt++;	//소수가 검출됐으니 증가
	//		printf("%d ", num);
	//		if (p_cnt == 10)
	//			break;	//10개 검출했으니 무한루프 탈출
	//	}
	//	
	//	num++;		//검출됐으니 다음 숫자 검사			
	//	cnt = 0;	//다시 다음 num을 검사해야하니 0으로 초기화
	//		
	//}
	//도전 6번
	//int num,h,m,s;	 //입력받을 숫자, 시,분,초
	//int h_sec = 3600;//시간을 초로 환산
	//int m_sec = 60;	 //분을 초로 환산
	//printf("초(second) 입력 : ");
	//scanf_s("%d", &num);
	//h = num / h_sec;//초에서 최대한 나올 수 있는 시간
	//m = (num % h_sec) / m_sec;//초에서 '시'를 뺀 나머지에서 분을 구함
	//s = num - ( h * h_sec ) - ( m * m_sec );//초를 구함
	//printf("[h : %d, m : %d, s : %d ]", h, m, s);
	//도전 7번 
	//int num;	//입력받을 상수 n
	//int cnt = 0;//2의 승수 세기
	//printf("상수 n 입력 : ");
	//scanf_s("%d", &num);
	//while (1)
	//{
	//	num /= 2;//2로 나눈 결과를 num에 갱신
	//	cnt++;	
	//	if (num == 1)//2로 나눌게 없다
	//		break;//무한루프 탈출
	//}
	//
	//printf("공식을 만족하는 k의 최댓값은 %d", cnt);

	//도전 8번
	//int num;		//입력 받을 정수

	//printf("정수 입력 : ");
	//scanf_s("%d", &num);
	//printf("2의 %d승은 %d",num, two_multi(num));
	
	return 0;
}

int two_multi(int num)//break에서 부터 시작, 쌓았다가 푼다
{
	/*
		ex. num = 3 
		1. two_multi(3) → num = 3 : return 2 * two_multi(2)
		2. two_multi(2) → num = 2 : return 2 * two_multi(1)
		3. two_multi(1) → num = 1 : return 2 * two_multi(0)
		4. two_multi(0) → num = 0 : return 1

		4 → 3 → 2 → 1 치환하며 다시 계산

		 4. two_multi(0) = 1
		 3. two_multi(1) = 2 * 1
		 2. two_multi(2) = 2 * 2
		 1. two_multi(3) = 2 * 4

		 결과값 "8"이 도출 
	*/
	if (num == 0)
		return 1;
	else
		return 2 * two_multi(num - 1);
}


