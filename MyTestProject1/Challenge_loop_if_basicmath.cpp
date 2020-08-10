#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	n == 1;
	double a, x, y, s, total1, total2;
	total1 = 0;
	total2 = 0;
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	a = (x + y) / 2;
	if (x > y)
	{
		for (;x >= y;x--)
		{
			printf("%.0lf\t", x);
			total1 += x;
			total2 += x * x;
			x++;
			n++;
		}
	}
	else
	{
		for (;x <= y;x++)
		{
			printf("%.0lf\t", x);
			total1 += x;
			total2 += x * x;
			n++;
		}
	}
	s = sqrt((n * total2 - total1 * total1) / (n * (n - 1)));
	printf("\nAverage = %.2lf", a);
	printf("\nSD = %.2lf", s);
	return 0;

}