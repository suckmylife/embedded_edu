
#include <stdio.h>
void ShowArayElem(int* param, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2 : %d %d \n", n1, n2);
}

int main()
{

	//290 page
	/*int arr[3] = { 0,1,2 };
	printf("배열의 이름 : %p \n", arr);
	printf("첫번째 요소 : %p \n", &arr[0]);
	printf("두번째 요소 : %p \n", &arr[1]);
	printf("세번째 요소 : %p \n", &arr[2]);*/
	// arr = &arr[i];

	//선생님이 주신 코드 배열을 포인터로 포인터를 주소로 사용하는 예 
	/*int arr[3] = { 0, 1, 2 };
	int* p = arr;
	printf("Name of Array : %p\n", arr);
	printf("1st element : %d\n", *(arr + 0));
	printf("2nd element : %d\n", *(arr + 1));
	printf("3rd element : %d\n", *(arr + 2));

	printf("1st element : %d\n", p[0]);
	printf("2nd element : %d\n", p[1]);
	printf("3rd element : %d\n", p[2]);*/
	 
	
  //292 page
	/*int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };
	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d, %g \n", arr1[0], arr2[0]);*/
	
	//복습
	//int arr[] = { 10, 20, 30 };
	//int* p = arr;  // arr[0]의 주소를 p에 저장

	//printf("p[0]: %d\n", p[0]);   // 값: 10
	//printf("&p[0]: %p\n", &p[0]);  // 주소: arr[0]의 주소
	//printf("*p: %d\n", *p);        // 값: 10 (arr[0]의 값)
	//printf("p: %p\n", p);        // 주소: arr[0]의 주소

	//294page
	//int arr[3] = { 15,25,35 };
	//int* ptr = &arr[0]; //int * ptr = arr; 과 같은 의미
	//printf("%d %d \n", ptr[0], arr[0]);
	//printf("%d %d \n", ptr[1], arr[1]);
	//printf("%d %d \n", ptr[2], arr[2]);
	//printf("%d %d \n", *ptr, *arr);

	//295 page
	/*int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);
	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);*/

	//297 page
	/*int arr[3] = { 11,22,33 };
	int* ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	printf("%d ", *ptr);ptr++;
	printf("%d ", *ptr);ptr++;
	printf("%d ", *ptr);ptr--;
	printf("%d ", *ptr);ptr--;
	printf("%d ", *ptr);printf("\n");*/

	//299 문제 1
	//int arr[5] = { 1,2,3,4,5 };
	//int* ptr = &arr[0];
	//for (int i = 0; i < 5; i++)
	//{
	//	*(ptr + i) += 2; //  arr[i] +=2
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d \n", *(ptr + i)); // arr[i]
	//}

	//문제2 
	/*int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		if (i != 0)
		{
			ptr++;
		}
		*ptr += 2;
		printf("%d \n", *ptr);
	}*/

	//문제3 
	/*int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += *(ptr - i);
	}
	printf("모든 값을 더한 결과 : %d \n", sum);*/

	//문제4 
	/*int arr[6] = { 1,2,3,4,5,6 };
	int* f_ptr = arr;
	int* t_ptr = &arr[5];
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		if (i != 0)
		{
			f_ptr++;
			t_ptr--;
		}
		temp = *(f_ptr);
		*(f_ptr) = *(t_ptr);
		*(t_ptr) = temp;
		
	}
	for (int i = 0; i < 6; i++)
	{
		printf("arr의 %d번째 요소 : %d \n", i, arr[i]);
	}*/
	

	//302 page
	//char str1[] = "My String";
	//char* str2 = "Your String";
	//printf("%s %s \n", str1, str2);

	//str2 = "Our String";
	//printf("%s %s \n", str1, str2);

	//str1[0] = 'X';
	////str2[0] = 'X';  
	////컴파일 에러나도록 유도한 것. 
	//// str2에서 선언된 문자열을 상수로 간주하여 
	//// 그 값을 변경시키지 말아야 한다.

	//printf("%s %s \n", str1, str2);

	//304 page
	/*int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);*/

	//306 page
	/*char* strArr[3] = { "Simple", "String", "Array" };
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);*/

	//312 page
	/*int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));*/

	//315 page
	/*int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2);

	Swap(num1, num2);
	printf("num1 num2 : %d %d \n", num1, num2);*/

	

	return 0;
}
