#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 

#include <clocale> 
#include <math.h> 
#include <iostream> 

int main()
{
	setlocale(LC_CTYPE, "");
	printf("Первый пункт!!!!\n");
	int n;
	float sum;
	float x, x1, x2, x3, k;
	printf("Введите число n: ");
	scanf_s("%d", &n);

	sum = 0;

	for (int i = 1; i < n+1; i++)
	{
		float stepen = pow(-2, i);
		float fact = 1;
		if ((i != 0) && (i != 1)){
			for (int a = 1; a < i+1; a++)
			{
				fact = fact * a;
			}
		}
		float chlen = stepen / fact;
		sum = sum + chlen;
	}
	printf("%f", sum);
	
	printf("\n\n-----\nВТОРОй пункт!!!!");

	printf("введите n: ");
	scanf_s("%d", &n);
	if (n >= 3) {
		x1 = 5;
		x2 = x1;
		for (int i = 2; i < n; i++)
		{
			x = cos(x1) + cos(x2);
			x1 = x2;
			x2 = x;
		}
		printf("значение х = %lf", x);
	}
	else {
		printf("error!\n");
	}


	printf("\n\n-----\nТретий пункт!!!!");
	
	// cos(Xn-1) + cos(Xn-2)
	float e;
	printf("Введите точность: ");
	scanf_s("%f", &e);
	sum = 0;
	
	x1 = 0;
	x2 = 0;
	k = 10;
	float fact = 1;
	for (float i = 1; i <= k; i++)
	{
		k++;
		x1 = x2;
		fact = fact * i;
		x2 = sum + (pow(-2, i)/ fact);
		sum = sum + x2;
		x3 = abs(x2 - x1);
		if (x3 < n)
		{
			i = k+2;
		}
		printf("%f\n", x3);
	}
	printf("Сумма %f\n", sum);

	
	return 0;
	_getch();


}