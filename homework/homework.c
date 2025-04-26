
#include <stdio.h>
int two_multi(int num);

int main()
{
	//도전 1번
	/*int num;
	
	printf("정수를 입력해 주세요 : ");
	scanf_s("%d", &num);
	printf("16진수로 변환 -> %x", num);*/

	//도전 2번
	/*int num1, num2;
	int big, small;
	printf("정수 2개를 입력해 주세요 : ");
	scanf_s("%d %d", &num1, &num2);
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
	for (int i = small; i < big+1; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	//도전 3번 
	/*int num1, num2;
	int m, n=1;
	int small, big;
	
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	big = (num1 > num2) ? num1 : num2;
	small = (num1 > num2) ? num2 : num1;
	
	while (n!=0)
	{
		n = big % small;
		big = small;
		small = n;
	}
	printf("두 수의 최대공약수 : %d", big);*/

	//도전 4번
	/*int bread = 500;
	int snack = 700;
	int cock  = 400;
	int money = 3500;

	int b_m = money / bread;
	int s_m = money / snack;
	int c_m = money / cock;
	
	int total;

	for (int b = 1; b < b_m; b++)
	{
		for (int s = 1; s < s_m; s++)
		{
			for (int c = 1; c < c_m; c++)
			{
				total = bread * b + snack * s + cock * c;
				if (total == 3500)
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n",b,s,c);
				}
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");*/

	//도전 5번 
	/*int num = 2;
	int p_num[10];
	int cnt = 0;
	int p_cnt = 0;
	while (1)
	{
		for (int i = 1; i < num+1; i++)
		{
			if (num % i == 0)
				cnt++;
		}
		if (cnt == 2)
		{
			p_cnt++;
			printf("%d ", num);
			if (p_cnt == 10)
				break;
		}
		cnt = 0;
		num++;
			
	}*/

	//도전 6번
	/*int num;
	int h_sec = 3600;
	int m_sec = 60;
	printf("초(second) 입력 : ");
	scanf_s("%d", &num);
	int h = num / h_sec;
	int m = (num % h_sec) / 60;
	int s = num - h * h_sec - m * m_sec;

	printf("[h : %d, m : %d, s : %d ]", h, m, s);*/

	//도전 7번 
	/*int num;
	int n = 1;
	int cnt = 0;

	printf("상수 n 입력 : ");
	scanf_s("%d", &num);

	while (1)
	{
		num /= 2;
		cnt++;
		if (num == 1)
			break;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", cnt);*/

	//도전 8번
	int num;
	int result=1;

	printf("정수 입력 : ");
	scanf_s("%d", &num);
	printf("2의 8승은 %d", two_multi(num));
	

}
int two_multi(int num)
{
	if (num == 0)
		return 1;
	else
		return 2 * two_multi(num - 1);
}