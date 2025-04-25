
#include <stdio.h>

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

    
    return 0;
}

