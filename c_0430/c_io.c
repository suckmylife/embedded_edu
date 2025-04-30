#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void ClearLineFromReadBuffer(void)
{
    while (getchar() != '\n');
}

struct point
{
    int xpos;
    int ypos;
};

int main()
{
    //21장 424page
    /*char* str = "Simple String";
    printf("1. puts test ------ \n");
    puts(str);
    puts("So Simple String");

    printf("2. fputs test ----- \n");
    fputs(str, stdout);
    printf("\n");
    fputs("So Simple String", stdout);
    printf("\n");
    printf("3. end of main ----\n");*/

    //426page
  /*  char str[7];
    int i;
    for (i = 0; i < 3; i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("Read %d : %s \n", i + 1, str);
    }*/

    //431 page
    //char perID[7];//6 + null 문자 = 7
    //char name[10];
    //
    //fputs("주민번호 앞 6자리를 입력하세요 : ", stdout);
    //fgets(perID, sizeof(perID), stdin);
    //fflush(stdin); //입력 버퍼를 비운다.
    ////ClearLineFromReadBuffer();
    //fputs("이름을 입력 하세요 : ", stdout);
    //fgets(name, sizeof(name), stdin);
    //printf("주민번호 : %s \n", perID);
    //printf("이름 : %s \n", name);

    //형식 문자열의 예제 잘안됨
    //int i;
    //float f;
    //char c, str[32];

    //scanf_s("%d", &i); 
    //printf("1 : %d\n", i);

    ////scanf_s("%f", &f);
    //scanf_s("%f\n", &f);
    //printf("2 : %f\n", f);

    ////여기서부터 제대로 실행안됨
    //scanf_s("%c\n", &c);
    ////scanf_s(" %*c%c", &c);
    //printf("3 : %c\n", c);

    //scanf_s("%s", &str);
    //printf("4 : %s\n", str);

    //437page 요거 컴파일안됨 _s붙여야함 여기서만 리눅스가서는 안함
    //char str1[20] = "1234567890";
    //char str2[20];
    //char str3[5];

    ///**** case 1 ****/
    //strcpy(str2, str1);
    //puts(str2);

    ///**** case 2 ****/
    //strncpy(str3, str1, sizeof(str3));
    //puts(str3);

    ///**** case 3 ****/
    //strncpy(str3, str1, sizeof(str3)-1);
    //str3[sizeof(str3) - 1] = 0;
    //puts(str3);

    //440page
    //char str1[20] = "First~";
    //char str2[20] = "Second";

    //char str3[20] = "Simple num :";
    //char str4[20] = "1234567890";

    ///** case1 **/
    ///*strcat(str1, str2);
    //puts(str1);*/

    ///** case2 **/
    //strncat_s(str3, sizeof(str3), str4, 7);
    //puts(str3);

    //443
    /*char str1[20];
    char str2[20];
    printf("문자열 입력 1 : ");
    scanf_s("%s", str1);

    printf("문자열 입력 2 : ");
    scanf_s("%s", str2);

    if (!strcmp(str1, str2))
        puts("두 문자열은 완벽히 동일합니다.");
    else
    {
        puts("두 문자열은 동일하지 않습니다.");
        if (!strncmp(str1, str2, 3))
            puts("그러나 앞 세 글자는 동일합니다.");
    }*/

    //444page
    /*char str[20];
    printf("digit input : ");
    scanf("%s", str);
    printf("%d \n", atoi(str));

    printf("floqt input : ");
    scanf("%s", str);
    printf("%g \n", atof(str));*/

    //445 page 문제1번
    //내답 틀림
    /*char str[20];
    int sum =0 ;
    printf("문자열 입력 : ");
    scanf_s("%s", str, 20);
    for (int i = 0; i < 20; i++)
    {
        if (atoi(str[i]) < 10)
        {
            sum += atoi(str[i]);
            printf("%d ", atoi(str[i]));
        }
    }
    printf("\n 총합 : %d", sum);*/
    
    //454page
    /*struct point pos1, pos2;
    double distance;
    fputs("point1 pos:", stdout);
    scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("point2 pos : ", stdout);
    scanf_s("%d %d", &pos2.xpos, &pos2.ypos);
    
    distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos)) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos));

    printf("두점의 거리는 %g 입니다. \n", distance);*/

    return 0;
}


