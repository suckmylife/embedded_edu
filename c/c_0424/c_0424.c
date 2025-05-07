

#include <stdio.h>

int main()
{
	//61page
	/*printf(" - 61 페이지 -\n");
	int num1 = 12;
	int num2 = 12;
	printf("num1 : %d \n", num1);
	printf("num1++ : %d \n", num1++);
	printf("num1 : %d \n\n", num1);
	printf("num2 : %d\n", num2);
	printf("++num2 : %d \n", ++num2);
	printf("num2 : %d \n\n", num2);*/

	//66page
	/*printf(" - 66 페이지 -\n");
	int num1 = 10;
	int num2 = 12;
	int result1=0, result2=0, result3=0;
	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);
	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n\n", result3);*/

	//67page
	/*printf(" - 67 페이지 -\n");
	int num1 = 1,  num2 = 2;
	printf("Hello "),printf("world! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d", num2), printf("\n\n");*/

	//71page
	//printf(" - 71 페이지 -\n"); 
	//int num1 = 0, num2 = 0, result =0;
	//printf("정수 one:  ");
	//scanf_s("%d", &num1); // 언제 바뀌었데....8년전만해도...
	//printf("정수 two:  ");
	//scanf_s("%d", &num2);

	//result = num1 + num2;
	//printf("%d + %d = %d \n", num1, num2, result);

	//실수값 비교의 문제 
	/*printf(" - 실수값 비교의 문제 -\n");
	float f = 0.0F;
	int i = 0;
	for (f = 0.0; f < 100.0f; f += 0.1f, i++)
	{
		printf("f:%f\n", f);

	}
	printf("i : %d\n", i);*/

	////93페이지
	//printf(" - 93 페이지 -\n");
	//int num1 = 15;
	//int num2 = 20;
	//int num3 = num1 & num2;
	//printf("AND 연산의 결과 : %d \n", num3);

	//98페이지
	/*printf(" - 98 페이지 -\n");
	int num = 15;
	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1칸 이동 결과 : %d \n", result1);
	printf("2칸 이동 결과 : %d \n", result2);
	printf("3칸 이동 결과 : %d \n", result3);*/

	//109페이지 sizeof가 필요한 이유 
	//printf(" - 109 페이지 -\n");
	//char ch = 9;
	//int inum = 1052;
	//double dnum = 3.1415;

	//printf("변수 ch의 크기 : %d \n", sizeof(ch));
	//printf("변수 inum의 크기 : %d \n", sizeof(inum));
	//printf("변수 dnum의 크기 : %d \n", sizeof(dnum));

	//printf("char의 크기 : %d \n", sizeof(char));
	//printf("int의 크기 : %d \n", sizeof(int));
	//printf("long의 크기 : %d \n", sizeof(long));//비주얼스튜디오는 4바이트인데 비주얼코드는 8바이트 이렇게 바이트 차이가 난다. 
	//printf("long long의 크기 : %d \n", sizeof(long long));
	//printf("float의 크기 : %d \n", sizeof(float));
	//printf("double의 크기 : %d \n", sizeof(double));
	
	//110페이지
	/*printf(" - 110 페이지 -\n");
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;
	printf("size of num1 & num2 : %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4 : %d, %d \n", sizeof(num3), sizeof(num4));
	printf("size of char add : %d \n", sizeof(num1+num2));
	printf("size of short add : %d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1 & result2 : %d, %d \n\n", sizeof(result1), sizeof(result2));*/

	//113페이지 
	//printf(" - 113 페이지 -\n");
	//double rad = 0;
	//double area = 0;
	//printf("원의 반지름 입력 : ");
	//scanf_s("%lf", &rad); //double 형 서식 lf로 받을것

	//area = rad * rad * 3.1415;
	//printf("원의 넓이 : %f \n\n", area);

	//117페이지
	/*printf(" - 117 페이지 - \n");

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;
	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);*/

	//118 문제1
	/*int l_x = 0, l_y=0;
	int r_x = 0, r_y = 0;
	int x = 0, y = 0;
	int result = 0;
	printf("좌상단의 x,y 좌표 : ");
	scanf_s("%d %d",&l_x,&l_y);
	printf("우하단의 x,y 좌표 : ");
	scanf_s("%d %d", &r_x, &r_y);

	if (l_x <= r_x)
	{
		x = r_x - l_x;
	}
	else
	{
		x = l_x - r_x;
	}

	if (l_y <= r_y)
	{
		y = r_y - l_y;
	}
	else
	{
		y = l_y - r_y;
	}
	result = x * y;
	printf("두점이 이루는 직사각형의 넓이는 %d 입니다", r_y);*/

	//문제2 
	/*double num1 = 0, num2 = 0;
	double plus = 0, minus = 0, m = 0, g = 0;
	printf("두 수를 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);
	plus = num1 + num2;
	g = num1 * num2;
	if (num1 > num2)
	{
		minus = num1 - num2;
		m = num1 / num2;
	}
	else
	{
		minus = num2 - num1;
		m = num2 / num1;
	}

	printf("더하기 : %lf, 빼기 : %lf, 나누기 : %lf, 곱하기 : %lf, ", plus, minus, m, g);*/
	
	//문제3
	/*
	1. 0~127
	2. 1
	3. 32

	*/

	//문제4
	/*char ch = 0;
	int num = 0;
	printf("아스키코드 정수값을 입력 : ");
	scanf_s("%d", &num);
	ch = num;
	printf("입력한 정수값에 대한 문자 : %c",ch);*/

	//문제5
	/*char ch = 0;
	printf("문자 입력 : ");
	scanf_s("%c", &ch ,2);
	printf("입력한 정수값에 대한 문자 : %d", ch);*/

	//126페이지
	/*printf(" - 126 페이지 - ");
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 : %f \n", num1);
	printf("실수 3.1415를 정수로 : %d \n", num2);
	printf("큰 정수 129를 작은 정수로 : %d \n", ch);*/

	//129페이지
	//int num1 = 3, num2 = 4;
	//double divResult = 0;
	//double true_result = 0;
	//divResult = num1 / num2;
	//true_result = (double)num1 / num2;
	//printf("나눗셈 결과 : %f \n", divResult);
	//printf("new 나눗셈 결과 : %f \n", true_result); //강제형변환의 중요한 이유를 설명하기 위한 코드 

	//139 page
	/*int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);*/

	//141 page
	//double d1 = 1.23e-3;//0.00123
	//double d2 = 1.23e-4;//0.000123
	//double d3 = 1.23e-5;//0.0000123
	//double d4 = 1.23e-6;//0.00000123

	//printf("%g \n", d1); //%f
	//printf("%g \n", d2); //%f
	//printf("%g \n", d3); //%e
	//printf("%g \n", d4); //%e  

	//153 page
	/*int dan = 0 , num = 1;
	printf("몇 단? ");
	scanf_s("%d", &dan);
	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}

	return 0;*/

	//155 문제1 
	/*int num = 0;
	printf("반복할 횟수를 입력하세요 : ");
	scanf_s("%d", &num);
	int i = 0;
	while (i < num)
	{
		printf("Hello world! \n");
		i++;
	}*/

	//문제2 
	/*int num = 0;
	printf("양의 정수를 입력하세요 : ");
	scanf_s("%d", &num);
	int i = 1;
	int result = 0;
	while (i < num)
	{
		result = i * 3;
		printf("%d ",result);
		i++;
	}*/

	//문제3
	/*int num1 = 1;
	int result = 0;
	while (num1 != 0)
	{
		printf("더할 숫자를 입력하세요 : ");
		scanf_s("%d", &num1);
		result = result + num1;
		printf("총 합 : %d\n", result);
	}*/

	//문제4 
	/*int num = 0;
	printf("몇단? : ");
	scanf_s("%d", &num);
	int i = 9;
	while (i > 0)
	{
		printf("%d x %d = %d \n", num, i, num * i);
		i--;
	}*/

	//문제5
	int num = 0;
	printf("입력할 정수 개수 : ");
	scanf_s("%d",&num);
	int i = 0;
	int result = 0;
	int sum = 0;
	while (i < num)
	{
		printf("정수 입력 : ");
		scanf_s("%d", &result);
		sum = result + sum;
		i++;
	}
	printf("평균 : %lf", (double)sum / num);
}
