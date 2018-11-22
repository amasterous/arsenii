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

	int n;
	float sum;
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
	return 0;
	_getch();


}