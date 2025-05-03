#include "basicArith.h"

double TriangleArea(double base, double height)
{
	return Div(Mul(base, height), 2);
}
double CricleArea(double rad)
{
	return Mul(Mul(rad, rad), PI);
}