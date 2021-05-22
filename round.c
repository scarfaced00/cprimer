#include <stdio.h>

int round_off(float num);
float pow(float base, float power);
double sqrt(double num);
int main(void)
{
	printf("pow(2, 3) = %f\n", pow(2, 3));
	printf("pow(4, 2) = %f", pow(4, 2));
}

int round_off(float num)
{
	int ten;
	ten = (int)(10 * num) % 10;
	if (ten >= 5 && ten <= 9)
	{
		return (int)(num + 1);
	}
	return (int)num;
}

float pow(float base, float power)
{
	int result = 1;
	for (int i = 0; i < (int)power; i++)
	{
		result *= base;
	}
	return result;
}

double sqrt(double num)
{

}