
#include <stdio.h>


//588 pagg
//int main(void)
//#include "header1.h"
//#include "header2.h"

//char name[30];
typedef struct
{
    char name[10];
    char sex;
    int age;
} Friend;

//char* ReadUserName(void)
//{
//    char name[30];
//    printf("What's your name : ");
//    gets(name);
//    return name;
//}
char* ReadUserName(void)
{
    char* name = (char*)malloc(sizeof(char) * 30);
    printf("What's your name : ");
    gets(name);
    return name;
}
#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소 : 경기도 용인시 \n");
#define SQUARE(X) X*X

#define CIRCLE_AREA(R) (PRODUCT((R),(R))*PI)
#define PI 3.14
#define PRODUCT(X,Y) ((X)*(Y))

//#define ADD 1
#define MIN 0
int DiffABS(int a, int b)
{
    if (a > b)
        return a - b;
    else
        return b - a;
}
#define DiffABS(X,Y) ((X)>(Y) ? (X)-(Y) : (Y)-(X))
#define HIT_NUM 5
#define STRING_JOB(A, B) #A "의 직업은 " #B "입니다"

//#define STNUM(Y, S, P) YSP
//#define STNUM(Y, S, P) Y S P
#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))
#define PLUS(A,B,C) ((A)+(B)+(C))
#define MULTI(A,B,C) ((A)*(B)*(C))
#define AREA(A) ((A)*(A)*(PI))
#define MAX(A,B) (((A)>(B)) ? (A) : (B))

//int num = 0;
//void Increment(void)
//{
//    num++;
//}
//int GetNum(void)
//{
//    return num;
//}

int main()
{
    //524 page
    /*
    char name[10];
    char sex;
    int age;
    FILE* fp = fopen("friend.txt", "wt");
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("이름 성별 나이 순 입력 : ");
        scanf_s("%s %c %d", name,sizeof(name), &sex,sizeof(&sex), &age, sizeof(&age));
        getchar();
        fprintf(fp, "%s %c %d", name, sex, age);
    }
    
    int ret;
    while (1)
    {
        ret = fscanf_s(fp, "%s %c %d", name, (unsigned)_countof(name), &sex, (unsigned)_countof(&sex), &age);
        if (ret == EOF)
            break;
        printf("%s %c %d \n", name, sex, age);
    }
    fclose(fp);*/
    //526 page
   /* Friend myfri1;
    Friend myfri2;

    FILE* fp = fopen_s(&fp,"friend.bin", "wb");
    printf("이름 성별 나이 순 입력 : ");
    scanf_s("%s %c %d", myfri1.name, sizeof(myfri1.name), &(myfri1.sex), sizeof(&(myfri1.sex)), &(myfri1.age), sizeof(&(myfri1.age)));
    fwrite((void*)&myfri1,sizeof(myfri1),1,fp);
    fclose(fp);

    fp = fopen_s(&fp, "friend.bin", "rb");
    fread_s((void*)&myfri2, sizeof(myfri2), sizeof(myfri2),1, fp);
    printf("%s %c %d \n", myfri2.name, myfri2.sex, myfri2.age);
    fclose(fp);*/

    /*FILE* fp = NULL;
    fp = fopen_s(&fp,"text.txt", "wt");
    if (fp != 0 || fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    fputs("123456789", fp);
    fclose(fp);

    fp = fopen_s(&fp, "text.txt", "rt");

    fseek(fp, -2, SEEK_END);
    putchar(fgetc(fp));

    fseek(fp, 2, SEEK_SET);
    putchar(fgetc(fp));

    fseek(fp, 2, SEEK_CUR);
    putchar(fgetc(fp));

    fclose(fp);*/
    //542 page
    /*char* name1;
    char* name2;

    name1 = ReadUserName();
    printf("name1 : %s \n", name1);
    name2 = ReadUserName();
    printf("name2 : %s \n", name2);
    char* name1;
    char* name2;

    name1 = ReadUserName();
    printf("name1 : %s \n", name1);
    name2 = ReadUserName();
    printf("name2 : %s \n", name2);

    printf("name1 : %s \n", name1);
    printf("name2 : %s \n", name2);*/
    //546 page 안됨
    /*int* ptr1 = (int*)malloc(sizeof(int));
    int* ptr2 = (int*)malloc(sizeof(int)*7);
    int i;

    *ptr1 = 20;
    for (i = 0;i < 7;i++)
        ptr2[i] = i + 1;

    printf("%d \n", *ptr1);
    for (i = 0;i < 7;i++)
        printf("%d : %d \n", i, ptr2[i]);
    
    free(ptr1);
    free(ptr2);*/
    //548 page 안됨
    /*char* name1;
    char* name2;
    name1 = ReadUserName();
    printf("name1 : %s \n", name1);
    name2 = ReadUserName();
    printf("name2 : %s \n", name2);

    printf("again name1 : %s \n", name1);
    printf("again name2 : %s \n", name2);

    free(name1);
    free(name2);*/
    /*int n;
    char* str, * tmp;

    printf("문자열의 길이는? : ");
    scanf_s("%d%*c", &n, sizeof(&n));

    printf("문자열을 입력하시오 : ");
    str = (char*)malloc(sizeof(char) * n);
    fgets(str, n, stdin);

    tmp = (char*)malloc(sizeof(char) * n);
    for (int i = n - 1, cnt = 0; i >= -1; i--) {
        if (str[i] == ' ' || i == -1) {
            for (int j = cnt - 1; j >= 0; j--)
                printf("%c", tmp[j]);
            cnt = 0;
            printf(" ");
        }
        else {
            tmp[cnt++] = str[i];
        }
    }
    printf("\n");

    free(str);
    free(tmp);*/
    //559 page
   /* printf("이름 : %s \n", NAME);
    printf("나이 : %d \n", NAME);
    PRINT_ADDR*/
    //560 page
    /*int num = 20;
    printf("num : %d \n", SQUARE(num));
    printf(" -5 : %d \n", SQUARE(-5));
    printf("2.5 : %g \n", SQUARE(2.5));

    printf("3+2 : %d \n", SQUARE(3+2));*/
    //563page
    /*double rad = 2.1;
    printf("반지름 %g 인 원의 넓이 : %g \n", rad, CIRCLE_AREA(rad));*/
    
    //565 page
    //printf("두 값의 차 : %d \n", DiffABS(5, 7));
    //printf("두 값의 차 : %g \n", DiffABS(1.8, -1.4));
    //int num1, num2;
    //printf("두개의 정수 입력 : ");
    //scanf_s("%d %d", &num1, &num2);

//#if ADD
//    printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif
//
//#if MIN
//    printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif
//#ifdef ADD
//    printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif
//
//#ifdef MIN
//    printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif
//569 page
//#if HIT_NUM == 5
//    puts("매크로 상수 HIT_NUM은 현재 5입니다");
//#else
//    puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다");
//#endif
//#if HIT_NUM == 7
//    puts("매크로 상수 HIT_NUM은 현재 7입니다");
//#elif HIT_NUM == 6
//    puts("매크로 상수 HIT_NUM은 현재 6입니다");
//#elif HIT_NUM == 5
//    puts("매크로 상수 HIT_NUM은 현재 5입니다");
//#else
//    puts("매크로 상수 HIT_NUM은 5,6,7이 아닙니다");
//#endif
//573 page
//printf("%s \n", STRING_JOB(이동춘, 나무꾼));
//printf("%s \n", STRING_JOB(한상순, 사냥꾼));
    //574 page
    //printf("학번 : %d \n", STNUM(10, 65, 175));
    //printf("학번 : %d \n", STNUM(10, 65, 075));

    //576 문제 26-1-1
    //int a, b, c;
    //printf("세개의 정수 입력 : ");
    //scanf_s("%d %d %d", &a, &b, &c);
    //printf("덧셈 : %d \n", PLUS(a,b,c));
    //printf("곱셈 : %d \n", MULTI(a,b,c));

    //580page
    /*printf("num : %d \n", GetNum());
    Increment();
    printf("num : %d \n", GetNum());
    Increment();
    printf("num : %d \n", GetNum());*/
    //extern 적용 후
    /*printf("num : %d \n", GetNum());
    Increment();
    printf("num : %d \n", GetNum());
    Increment();
    printf("num : %d \n", GetNum());*/

    return 0;
}
