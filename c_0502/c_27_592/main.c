﻿
#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main()
{
	printf("삼각형의 넒이(밑변 4, 높이 2) : %g \n", TriangleArea(4, 2));
	printf("원 넒이(반지름 3) : %g \n", CricleArea(3));
	printf("직사각형 둘레(밑변 2.5, 높이 5.2 : %g \n", RectangleRound(2.5,5.2));
	printf("정사각형 둘레(변의 길이 3) : %g \n", SquareRound(3));

	return 0;

}
