#include <stdio.h>
void SwapIntPtr(int* p1, int* p2)
{
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

void SwapIntPtr2(int **dp1, int **dp2)
{
    int* temp = *dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}

void MaxAndMin(int **n1, int **n2)
{
    if (*n1 > *n2)
    {

    }
}

void ShowArray2DStyle(int (*arr)[4], int column)
{
    int i, j;
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < 4; j++)
            printf(" %d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int Sum2DArr(int arr[][4], int column)
{
    int i, j, sum = 0;
    for (i = 0; i < column;i++)
        for (j = 0;j < 4;j++)
            sum += arr[i][j];
    return sum;
}

void SimpleAdder(int n1, int n2)
{
    printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char* str)
{
    printf("%s ", str);
}

float cal_add(int num1, int num2)
{
    return num1 + num2;
};
float cal_miuns(int num1, int num2)
{
    return num1 = num2;
};
float cal_div(int num1, int num2)
{
    return num1 / num2;
};
float cal_mul(int num1, int num2)
{
    return num1 * num2;
};

void right_90(int (*arr)[4], int column)
{
    //[0][3], [1][3], [2][3], [3][3]
    //[3][0], [3][1], [3][2], [3][3]
    //[0][0], [1][0], [2][0], [3][0]
    int a, b;
 
    for (a = 0; a < column; a++)
    {
        for (b = 0; b < column; b++)
            printf(" %d ", arr[a][column-1-b]);
        printf("\n");
    }

    for (a = 0; a < column; a++)
    {
        for (b = 0; b < column; b++)
            printf(" %d ", arr[column-1 - a][b]);
        printf("\n");
    }

    for (a = 0; a < column; a++)
    {
        for (b = 0; b < column; b++)
            printf(" %d ", arr[column-1-a][column-1 - b]);
        printf("\n");
    }
    
    
}

int main()
{
    //359page 
    /*double num = 3.14;
    double* ptr = &num;
    double** dptr = &ptr;
    double* ptr2;

    printf("num : %9p *dptr :%9p \n", num, *dptr);
    printf("num : %9g, **dptr : %9g \n", num, **dptr);
    ptr2 = *dptr;
    *ptr2 = 10.99;
    printf("num : %9g, **dptr : %9g", num, **dptr);*/

    //361 page
   /* int num1 = 10, num2 = 20;
    int* ptr1, * ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2 : %d, %d \n", *ptr1, *ptr2);
    SwapIntPtr(ptr1, ptr2);
    printf("*ptr1, ptr2 : %d %d \n", *ptr1, *ptr2);*/

    //363 page
    /*int num1 = 10, num2 = 20;
    int* ptr1, * ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2 : %d, %d \n", *ptr1, *ptr2);
    SwapIntPtr2(&ptr1, &ptr2);
    printf("*ptr1, ptr2 : %d %d \n", *ptr1, *ptr2);*/

    //365 page
    /*int num1 = 10, num2 = 20, num3= 30;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;

    int* ptrArr[] = { ptr1, ptr2, ptr3 };
    int** dptr = ptrArr;

    ptr1 = &num1, ptr2 = &num2;
    printf("%d, %d, %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d, %d, %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));*/

    //문제 17-1 함수로 큰값의 주소와 작은값의 주소를 프린트하라 
    /*int* maxPtr;
    int* minPtr;
    int arr[5] = { 1,2,3,4,5 };*/

    //374 page
    /*int arr2d[3][3];
    printf("       arr2d : %d \n", arr2d);
    printf("    arr2d[0] : %d \n", arr2d[0]);
    printf("&arr2d[0][0] : %d \n\n", &arr2d[0][0]);

    printf("    arr2d[1] : %d \n", arr2d[1]);
    printf(" &arr2d[1][0]: %d \n\n", &arr2d[1][0]);

    printf("    arr2d[2] : %d \n", arr2d[2]);
    printf(" &arr2d[2][0]: %d \n\n", &arr2d[2][0]);

    printf("sizeof[arr2d] : %d \n", sizeof(arr2d));
    printf("sizeof[arr2d[0]] : %d \n", sizeof(arr2d[0]));
    printf("sizeof[arr2d[1]] : %d \n", sizeof(arr2d[1]));
    printf("sizeof[arr2d[2]] : %d \n", sizeof(arr2d[2]));*/

    //376 page
  /*  int arr1[3][2];
    int arr2[2][3];
    printf("arr1   : %p \n", arr1);
    printf("arr1+1 : %p \n", arr1 + 1);
    printf("arr1+2 : %p \n", arr1 + 2);

    printf("arr2   : %p \n", arr2);
    printf("arr2+1 : %p \n", arr2 + 1);
    printf("arr2+2 : %p \n", arr2 + 2);*/

    //379 page
    /*int arr1[2][2] = { {1,2},{3,4} };
    int arr2[3][2] = { {1,2},{3,4},{5,6} };
    int arr3[4][2] = { {1,2},{3,4},{5,6},{7,8} };

    int (*ptr)[2];
    int i;

    ptr = arr1;
    printf("*** Show 2,2 arr1 ** \n");
    for (i = 0; i < 2; i++)
        printf(" %d %d \n", ptr[i][0], ptr[i][1]);

    ptr = arr2;
    printf("*** Show 3,2 arr1 ** \n");
    for (i = 0; i < 3; i++)
        printf(" %d %d \n", ptr[i][0], ptr[i][1]);

    ptr = arr3;
    printf("*** Show 4,2 arr1 ** \n");
    for (i = 0; i < 4; i++)
        printf(" %d %d \n", ptr[i][0], ptr[i][1]);*/

    //384 page
    /*int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
    int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };

    ShowArray2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
    ShowArray2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));

    printf("arr1의 합 : %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("arr2의 합 : %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));*/

    //386 page
   /* int a[3][2] = { {1,2},{3,4},{5,6} };
    printf("      a[0] : %p \n", a[0]);
    printf("*( a + 0 ) : %p \n", *(a + 0));

    printf("      a[1] : %p \n", a[1]);
    printf("*( a + 1 ) : %p \n", *(a + 1));

    printf("      a[2] : %p \n", a[2]);
    printf("*( a + 2 ) : %p \n", *(a + 2));

    printf("%d %d \n", a[2][1], (*(a + 2))[1]);
    printf("%d %d \n", a[2][1], *(a[2] + 1));
    printf("%d %d \n", a[2][1], *(*(a + 2)+1));*/

    //문제 18-1
    /*int* arr1[5];
    int* arr2[3][5];

    int (*one)[] = arr1;
    int (*ptr)[5] = arr2;*/

    //문제 18-2
    //1번이랑 같네 
    /*one : int (*one), int (*two)
    two : int (*ptr)[4], int (*ptr2)[4]*/

    //문제 18-3
    /*one : int *(*one) / int  *(*two)[5]
    two : int **(*one) / int ***(*two)[5]*/

    //문제 18-4
    /*3 2
    6 4
    5 2
    1 1*/

    //문제 18-5
    /*1. *(*(arr+1)+0)[1] (0)
     *(**arr+1)[1]
    3. *(arr[1]+0)[1]
     **arr[0][1]
     ***arr[1]*/

    //19장 
    /*printf("  main : %p \n", main);
    printf("printf : %p \n", printf);
    printf(" scanf : %p \n", scanf_s);*/

    //394 page
    /*char* str = "Function Pointer";
    int num1 = 10, num2 = 20;

    void (*fptr1)(int, int) = SimpleAdder;
    void (*fptr2)(char*) = ShowString;
    fptr1(num1, num2);
    fptr2(str);*/
    
    //계산기
    /*int n1, n2;
    char op;
    float result = 0.0;
    printf("2개 정수 입력 : ");
    scanf_s("%d %d", &n1, &n2);
    printf("사칙연산 중 한개 입력 : ");
    scanf_s("%s", &op,2);
    float (*funcPtr1) (int, int) = cal_add;
    float (*funcPtr2) (int, int) = cal_miuns;
    float (*funcPtr3) (int, int) = cal_mul;
    float (*funcPtr4) (int, int) = cal_div;
    switch (op)
    {
    case '+':
        result = funcPtr1(n1, n2);
        break;
    case '-':
        result = funcPtr2(n1, n2);
        break;
    case '*':
        result = funcPtr3(n1, n2);
        break;
    case '/':
        result = funcPtr4(n1, n2);
        break;
    }

    printf("%f", result);*/

    //도전1번
    /*int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    void (*func)(int, int) = right_90;
    func(arr, 4);*/
    //정답
    /*
        #include <stdio.h>

int main(void)
{
  int arr[4][4], rot[4][4];

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", (j+1)+i*4);
    }
    printf("\n");
  } 

  printf("************\n");

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      arr[j][4-1-i]=j+1+i*4;
    }
  } 
  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  } 
 
  printf("************\n");

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      rot[j][4-1-i]=arr[i][j];
    }
  } 
  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", rot[i][j]);
    }
    printf("\n");
  } 
 
  printf("************\n");

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      arr[j][4-1-i]=rot[i][j];
    }
  } 
  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  } 
}
    */

    //420 page
    /*int ch1, ch2;
    ch1 = getchar();
    ch2 = fgetc(stdin);
    putchar(ch1);
    fputc(ch2, stdout);*/

    //421
    /*int ch;
    while (1)
    {
        ch = getchar();
        if (ch == EOF)
            break;
        putchar(ch);
    }*/

    //문제 21-1
   /* int ch;
    int diff = 'a' - 'A';
    ch = getchar();
    if (ch == EOF)
        printf("NULL");
    else if (ch > 96)
    {
        ch -= 32;
    }
    else
    {
        ch += 32;
    }
    putchar(ch);*/

    return 0;
}


