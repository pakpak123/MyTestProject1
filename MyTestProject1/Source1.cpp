#include<stdio.h>
#include<math.h>
int main()
{
	int x, y;
	double A;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > y)
	{
		for (int i = x;i < y;i++)
		{
			printf("%d",i);
		}
	}
	else
	{
		for (int i = x;i < y;i++)
		{
			printf("%d",i);
		}
	}
	A = (x + y) / 2;

	printf("%.2lf", A);

}