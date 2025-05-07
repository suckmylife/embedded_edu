#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

int Sum(int n, ...);
//typedef struct div
//{
//	int quotient;
//	int remainder;
//}Div;
//#include "stdiv.h"
//#include "stdiv2.h"
//#include "intdiv4.h"

//extern Div IntDiv(int num1, int num2);

//typedef struct
//{
//	char writer[BUFSIZ];
//	char title[BUFSIZ];
//	int page;
//}Library;

typedef struct
{
	char writer[BUFSIZ];
	char title[BUFSIZ];
	int page;
}Library;

int main()
{
	//Div val = IntDiv(5, 2);
	//printf("몫 : %d \n", val.quotient);
	//printf("나머지 : %d \n", val.remainder);
	//return 0;

	//28장 1번
	/*Library lib1;
	Library lib2;
	Library lib3;
	printf("도서 정보 입력\n");
	printf("저자 : ");
	scanf_s(" %s", lib1.writer, sizeof(lib1.writer));
	printf("제목 : ");
	scanf_s(" %s", lib1.title, sizeof(lib1.title));
	
	printf("페이지 수 : ");
	scanf_s(" %d", &(lib1.page));

	printf("저자 : ");
	scanf_s("%s", lib2.writer, sizeof(lib2.writer));
	printf("제목 : ");
	scanf_s("%s", lib2.title, sizeof(lib2.title));
	printf("페이지 수 : ");
	scanf_s(" %d", lib2.page);

	printf("저자 : ");
	scanf_s("%s", lib3.writer, sizeof(lib3.writer));
	printf("제목 : ");
	scanf_s("%s", lib3.title, sizeof(lib3.title));
	printf("페이지 수 : ");
	scanf_s(" %d", lib3.page);

	printf("도서 정보 출력 \n");
	printf("book1\n");
	printf("저자 : %s \n", lib1.writer);
	printf("제목 : %s \n", lib1.title);
	printf("페이지 수 : %d \n", lib1.page);

	printf("book2\n");
	printf("저자 : %s \n", lib2.writer);
	printf("제목 : %s \n", lib2.title);
	printf("페이지 수 : %d \n", lib2.page);

	printf("book3\n");
	printf("저자 : %s \n", lib3.writer);
	printf("제목 : %s \n", lib3.title);
	printf("페이지 수 : %d \n", lib3.page);*/

	//2번
	/*Library* lib[3];

	for (int i = 0; i < 3; i++)
	{
		printf("도서정보 입력 \n");
		printf("저자 : ");
		scanf_s("%s%*C", &(lib[i]->writer));
		printf("제목 : ");
		scanf_s("%s%*C", &(lib[i]->title));
		printf("페이지수 : ");
		scanf_s("%d", &(lib[i]->page));
	}

	for (int i = 0; i < 3; i++)
	{
		printf("book %d", i + 1);
		printf("저자 : %s", lib[i]->writer);
		printf("제목 : %s", lib[i]->title);
		printf("페이지 수 : %d", lib[i]->page);
	}*/

	//4번 
	//FILE* fp = fopen("text.txt", "rt");
	//if (fp == NULL)
	//{
	//	puts("파일오픈 실패!");
	//	return -1;
	//}
	//char str;
	//int i = 0;
	//int a_cnt = 0;
	//int p_cnt = 0;
	//bool isFirst = true;
	//do {
	//	str = fgetc(fp);
	//	if (isFirst)
	//	{
	//		if (str == 'A')
	//			a_cnt++;
	//		else if (str == 'P')
	//			p_cnt++;
	//		isFirst = false;
	//	}
	//	else
	//	{
	//		if (str == ' ' || str == '\t' || str == '\n')
	//			isFirst = true;
	//	}

	//}while(str != feof)

	/*while (fgets(str, sizeof(str), fp) != NULL)
	{
		for (int i = 0; i < strlen(str); i++)
		{
			if (isFirst)
			{
				isFirst = false;
				if (str[i] == 'A')
					a_cnt++;
				else if (str[i] == 'P')
					p_cnt++;
			}
			else
			{
				if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
					isFirst = true;
			}
		}
	}*/
	/*printf("A로 시작하는 단어의 수 : %d \n", a_cnt);
	printf("P로 시작하는 단어의 수 : %d", p_cnt);
	fclose(fp);*/
	
	printf("1+2=%d \n", Sum(2, 1, 2));
	printf("1+2+3=%d \n", Sum(3, 1, 2,3));
	printf("1+2+3+4=%d \n", Sum(4, 1, 2,3,4));

	return 0;
}

int Sum(int n, ...)
{
	int sum = 0;
	int i;
	va_list vlist; // 1 단계 : 가변인자의 참조자 선언
	va_start(vlist, n); // 2 단계 : 참조 대상과 범위 지정
	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int); // 3 단계 : 값의 추출
	va_end(vlist); // 4 단계 : 해제 
	return sum;
}