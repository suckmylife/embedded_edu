
#include <stdio.h>
int NumberCompare(int num1, int num2);
int AbsdoCompare(int num1, int num2);
int GetAbsoValue(int num);
int getMax(int num1, int num2, int num3);
int getMin(int num1, int num2, int num3);
//230
//int num = 0;
// void Add(int val)
//{
//    num += val;
//}
//230

//231
//int num = 1;
//int Add(int val)
//{
//    int num = 9;
//    num += val;
//    return num;
//}
//231

//234
//void simplefuncj(void)
//{
//    static int num1 = 0;
//    int num2 = 0;
//    num1++, num2++;
//    printf("static : %d, local : %d \n", num1, num2);
//}
//234


int CelToFah(double C)
{
    return C * 1.8 + 32;
}
int FahToCel(double f)
{
    return f / 1.8 - 32;
}
//int Add(int num1, int num2)
//{
//    return num1 + num2;
//}

void ShowAddResult(int num)
{
    printf("덧셈결과 출력 : %d \n", num);
}

int ReadNum(void)
{
    int num = 0;
    scanf_s("%d", &num);
    return num;
}

void HowToUseThisProg(void)
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
    printf("자! 그럼 두개의 정수를 입력하세요. \n");
}

int main()
{
    //7장 do~while문 
    //156 page
   /* int i = 0, j = 0;
    int num = 0;
    while (i < 10)
    {
        while (j < 10)
        {
            num++;
            j++;
        }
        i++;
    }
    printf("i = %d, j = %d, num = %d \n", i, j, num);*/
    //문제1 
   /* int num1 = 0;
    int sum = 0;
    int i = 0;
    printf("총 5개의 정수를 입력합니다. \n");
    while (i < 5)
    {
        printf("%d번째 정수를 입력하시오 : ", i + 1);
        scanf_s("%d", &num1);
        
        if (num1 < 1)
        {
            printf("\n다시 입력해야 합니다. 1미만은 안됩니다.\n\n");
        }
        else
        {
            sum += num1;
            i++;
        }
    }
    printf("5개 정수의 총합은 : %d 입니다.", sum);*/

    //문제2
    /*int i = 0;
    int j = 0;
    while (i < 5)
    {
        while (j<i)
        {
            printf("o");
            j++;
        }
        i++;
        j = 0;
        printf("*\n");
    }*/

    //160 페이지
    /*int total = 0, num = 0;
    do
    {
        printf("정수 입력(0 to quit): ");
        scanf_s("%d", &num);
        total += num;
    } while (num != 0);
    printf("합계 : %d \n", total);

    */

    //165 page
    /*int total = 0;
    int i, num = 0;
    printf("0부터 num까지의 덧셈, num은? ");
    scanf_s("%d", &num);
    for (i = 0; i < num + 1; i++)
        total += i;
    printf("0부터 %d까지 덧셈결과 : %d \n", num, total);*/

    //168 page
    /*int cur, is = 0;
    for (cur = 2; cur < 10; cur++)
    {
        for (is = 1; is < 10; is++)
            printf("%d x %d = %d \n", cur, is, cur * is);
        printf("\n");
        
    }*/

    //179 page
   /* int num = 0;
    printf("정수 입력 : ");
    scanf_s("%d", &num);
    if (num < 0)
        printf("입력값은 0보다 작다. \n");
    if (num > 0)
        printf("입력값은 0보다 크다. \n");
    if (num == 0)
        printf("입력값은 0이다. \n");*/

    //181page
    /*int opt = 0;
    double num1, num2 = 0;
    double result = 0;
    printf("1. 덧셈  2. 뺄셈  3. 곱셈  4. 나눗셈 \n");
    printf("선택 ? ");
    scanf_s("%d", &opt);
    printf("두개의 실수 입력 : ");
    scanf_s("%lf %lf", &num1, &num2);
    if (opt == 1)
        result = num1 + num2;
    if (opt == 2)
        result = num1 - num2;
    if (opt == 3)
        result = num1 * num2;
    if (opt == 4)
        result = num1 / num2;
    printf("결과 : %f \n", result);*/

    //183page
    /*int num = 0;
    printf("정수 입력 : ");
    scanf_s("%d", &num);
    if (num < 0)
        printf("입력값은 0보다 작다. \n");
    else
        printf("입력 값은 0보다 작지 않다. \n");*/

    //186page
    /*double num1, num2 = 0;
    double result = 0;
    int opt = 0;
    printf("1. 덧셈  2. 뺄셈  3. 곱셈  4. 나눗셈 \n");
    printf("선택 ? ");
    scanf_s("%d", &opt);
    printf("두개의 실수 입력 : ");
    scanf_s("%lf %lf", &num1, &num2);
    if (opt == 1)
        result = num1 + num2;
    else if (opt == 2)
        result = num1 - num2;
    else if (opt == 3)
        result = num1 * num2;
    else 
        result = num1 / num2;
    printf("결과 : %f \n", result);*/
    
    //188 page
    /*int num, ats = 0;
    printf("정수 입력 : ");
    scanf_s("%d", &num);
    ats = num > 0 ? num : num * (-1);
    printf("절댓값 : %d \n", ats);*/
    
    //문제1 
    /*int i = 1;
    while (i < 100)
    {
        if (i % 7 == 0 || i % 9 == 0)
            printf("7 or 9의 배수 : %d \n", i);
        i++;
    }*/

    //190 page 
//int sum=0, num = 0;
//while (1)
//{
//    sum += num;
//    if (sum > 5000)
//        break;
//    num++;
//}
//printf("sum : %d \n", sum);
//printf("num : %d \n", num);

//int num = 0;
//printf("start! ");
//for (num = 1; num < 20; num++)
//{
//    if (num % 2 == 0 || num % 3 == 0)
//        continue;
//    printf("%d ", num);
//}
//printf("end! \n");

//문제8-2-1 
//int i = 0;
//int j = 1;
//while (i < 10)
//{
//    if (i % 2 == 0)
//    {
//        while (j < i+1)
//        {
//            printf("%d x %d = %d\n", i, j, i * j);
//            j++;
//        }
//        printf("\n");
//    }
//    i++;
//    j = 1;
//}

    //문제 8-2-2
   /* int i = 0, j = 0;
    while (i < 10)
    {
        while (j < 10)
        {
            int a = i * 10;
            int b = j * 10;
            int num1 = a + j;
            int num2 = b + i;
            int sum = num1 + num2;

            if (sum == 99)
            {
                printf("A : %d  B : %d \n", i, j);
            }
            j++;
        }
        j = 0;
        i++;
    }*/

//int score = 0;
//while (1)
//{
//    printf("성적을 입력하세요 : ");
//    scanf_s("%d", &score);
//    if (score < 0 || score >100)
//    {
//        printf("\n다시 입력하세요. 음수는 안됩니다.\n");
//    }
//    else
//    {
//        break;
//    }
//}
//
//switch (score) {
//    case 100: case 99: case 98:
//    case 97: case 96: case 95:
//        printf("%d : A+\n", score);
//        break;
//    case 94: case 93: case 92:
//    case 91: case 90:
//        printf("%d : A\n", score);
//        break;
//    case 89: case 88: case 87:
//    case 86: case 85:
//        printf("%d : B+\n", score);
//        break;
//    case 84: case 83: case 82:
//    case 81: case 80:
//        printf("%d : B\n", score);
//        break;
//    case 79: case 78: case 77:
//    case 76: case 75:
//        printf("%d : C+\n", score);
//        break;
//    case 74: case 73: case 72:
//    case 71: case 70:
//        printf("%d : C\n", score);
//        break;
//    case 69: case 68: case 67:
//    case 66: case 65:
//        printf("%d : D+\n", score);
//        break;
//    case 64: case 63: case 62:
//    case 61: case 60:
//        printf("%d : D\n", score);
//        break;
//    case 59: case 58: case 57:
//    case 56: case 55:
//        printf("%d : E+\n", score);
//        break;
//    case 54: case 53: case 52:
//    case 51: case 50:
//        printf("%d : E\n", score);
//        break;
//    case 49: case 48: case 47:
//    case 46: case 45:
//        printf("%d : F+\n", score);
//        break;
//    default:
//        printf("%d : F\n", score);
//}
    
    //212 page
    /*int result = 0;
    result = Add(3, 4);
    printf("덧셈의 결과 : %d \n", result);
    result = Add(5, 8);
    printf("덧셈결과 : %d \n", result);*/

//214 page
//int result = 0, num1 = 0, num2 = 0;
//HowToUseThisProg();
//num1 = ReadNum();
//num2 = ReadNum();
//result = Add(num1, num2);
//ShowAddResult(result);
    
//218 page
//printf("3과 4에서 큰수는 %d 이다. \n", NumberCompare(3, 4));
//printf("7과 2에서 큰수는 %d 이다. \n", NumberCompare(7, 2));

//219 page(못봄)
//221 문제1
//int num1 = 0, num2 = 0, num3 = 0;
//printf("숫자 3개 입력 : ");
//scanf_s("%d %d %d", &num1, &num2, &num3);
//printf("가장큰 수 : %d\n", getMax(num1, num2, num3));
//printf("가장작은 수 : %d\n", getMin(num1, num2, num3));

    //문제2
//printf("변환할 온도 : 1. 섭씨->화씨  2. 화씨->섭씨\n");
//int num1=0;
//scanf_s("%d",&num1);
//int tem = 0;
//printf("온도입력 : ");
//scanf_s("%d", &tem);
//switch (num1)
//{
//case 1:
//    printf("화씨 변환 : %d \n",CelToFah(tem));
//    break;
//case 2:
//    printf("섭씨 변환 : %d \n", FahToCel(tem));
//    break;
//
//default:
//    break;
//}
//230page
//printf("num: %d\n", num);
//Add(3);
//printf("Add 함수 적용 후 num: %d \n", num);
//num++;
//printf("증가후 num : %d", num);
//231 page
//int num = 5;
//printf("Add 함수 적용 후 num: %d \n", Add(3));
//printf("증가후 num : %d", num+9);
//234page
//int i = 0;
//for (i = 0; i < 3; i++)
//    simplefuncj();

//11장 256 page
//int arr[5];
//int sum = 0, i = 0;
//arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//for (i = 0; i < 5; i++)
//{
//    sum += arr[i];
//}
//printf("배열요소에 저장된 값의 합: %d \n", sum);
//259page 
//int arr1[5] = { 1,2,3,4,5 };
//int arr2[] = { 1,2,3,4,5,6,7 };
//int arr3[5] = { 1,2 };
//int ar1len = 0, ar2len = 0, ar3len = 0, i = 0;
//printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
//printf("배열 arr2의 크기: %d \n", sizeof(arr2));
//printf("배열 arr3의 크기: %d \n", sizeof(arr3));
//ar1len = sizeof(arr1) / sizeof(int);
//ar2len = sizeof(arr2) / sizeof(int);
//ar3len = sizeof(arr3) / sizeof(int);
//for (i = 0; i < ar1len; i++)
//    printf("%d ", arr1[i]);
//printf("\n");
//for (i = 0; i < ar2len; i++)
//    printf("%d ", arr2[i]);
//printf("\n");
//for (i = 0; i < ar3len; i++)
//    printf("%d ", arr3[i]);
//printf("\n");

//문제1
//int arr[5];
//printf("정수 5개를 입력해주세요 :");
//scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//int temp = 0;
//
//for (int i = 0; i < 5; i++)
//{
//    for (int j = i+1; j < 5; j++)
//    {
//        if (arr[i] < arr[j])
//        {
//            temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//    }
//}
//
//for (int i = 0; i < 5; i++)
//{
//    printf("%d ", arr[i]);
//}...문제를 잘 읽어 보자...




//262 page
//char str[] = "Good morning!";
//printf("배열 str의 크기 : %d \n", sizeof(str));
//printf("널 문자 문자형 출력 : %c \n", str[13]);
//printf("널 문자 정수형 출력 : %d \n", str[13]);
//str[12] = '?';
//printf("문자열 출력 : %s \n", str);
//280 page
//int num1 = 100, num2 = 100;
//int* pnum;
//pnum = &num1;
//(*pnum) += 30;
//pnum = &num2;
//(*pnum) -= 30;
//printf("num1 : %d, num2 : %d \n", num1, num2);

    return 0;
}

int NumberCompare(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int getMax(int num1, int num2, int num3)
{
    int max = 0;
    max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;
    return max;
}

int getMin(int num1, int num2, int num3)
{
    int max = 0;
    max = (num1 < num2) ? num1 : num2;
    max = (max < num3) ? max : num3;
    return max;
}

int AbsdoCompare(int num1, int num2)
{

}

int GetAbsoValue(int num)
{

}