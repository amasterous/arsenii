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

	for (int i = 0; i < n; i++)
	{
		int stepen = (-2) ^ i;
		fact = 1;
		if i != 0 && i != 1{
			for (int a = 0; a < i; a++)
			{
				fact = fact * a;
			}
		}
		chlen = stepen / fact;
		sum = sum + chlen;
	}
	printf("%f", sum)

	
}
