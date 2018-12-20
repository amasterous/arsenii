// Laba7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <clocale>
#include <cmath>
#pragma warning(disable:4996)
#include <conio.h>

void input_rand_array(int mass[10][10], int n, int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			mass[i][j]=rand()%11;
}

void output_array(int mass[10][10], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%5d", mass[i][j]);
		printf("\n");
	}
}

void pol_elem(int mass[10][10], int n, int m)
{
	int kol=0;
	for(int i=0;i<n;i++)
		for(int j=i;j<m;j++)
			if(mass[i][j]>0)
				kol++;
	printf("Количество положительных элементов главной диагонали и выше - %d \n", kol);

}

void sredn_arif(int mass[10][10], int n, int m)
{
	float mid=0;
	int j=0;
	for(int i=0;i<n;i++)
	{	
		j=n-i-1;
		mid=mid+mass[i][j];
	}
	mid=mid/n;
	printf("Среднее арифметическое элементов побочной диагонали - %d \n", mid);
}

void massive(int mass[10][10], int n, int m,int mass1[10][10],int mass2[10][10])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			mass[i][j]=2*mass1[i][j]+mass2[i][j];
	}
	output_array(mass,n,m);
}



int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	setlocale(LC_CTYPE,"");
	int a[10][10],n1,m1;
	puts("Введите размер квадратной матрицы");
	scanf("%d", &n1);
	if(n1<=10&&n1>0)
	{
		m1=n1;
		input_rand_array(a,n1,m1);
		output_array(a,n1,m1);
		int b[10][10],m2,n2;
		puts("Введите количество строк массива b");
		scanf("%d",&n2);
		puts("Введите количество столбцов массива b");
		scanf("%d",&m2);
		if(n2<=10&&n2>0&&m2<=10&&m2>0)
		{
			int c[10][10],n3,m3;
			input_rand_array(b,n2,m2);
			output_array(b,n2,m2);
			pol_elem(a,n1,m1);
			sredn_arif(a,n1,m1);
			if(n2<n1)
				n3=n2;
			else
				n3=n1;
			if(m2<m1)
				m3=m2;
			else
				m3=m1;
			massive(c,n3,m3,a,b);
		}
		else
			puts("Неверно введен размер массива b");
	}
	else 
		puts("Неверно введен размер массива a");

	return 0;
}

