#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 
#include <clocale> 
#include <math.h> 
#include <iostream> 


void change_ten(int a[10][10], int x, int y) {
	for (int i = 0; i < y; i++)
	{
		if (a[x][i] > 10) {
			a[x][i] = 0;
		}
	}
	
}

void change_stolbci(int a[10][10], int first_x, int y, int second_x) {
	int var;
	for (int i = 0; i < y; i++)
	{
		var = a[i][first_x];
		a[i][first_x] = a[i][second_x];
		a[i][second_x] = var;
	}
}

void initialize_b(int b[10], int x) {
	int znach_b;
	printf("Введите значения элементов для массива b\n");
	for (int i = 0; i < x; i++) {
		scanf_s("%d", &znach_b);
		b[i] = znach_b;
	}
}

void initialize_a(int a[10][10], int x, int y) {
	int n;
	printf("Введите значения элементов для массива а\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
		{
			scanf_s("%d", &n);
			a[i][j] = n;
		}
	}
}

void make_arr_c(int c[10][10], int a[10][10], int b[10], int x, int y) {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			c[i][j] = a[i][j] + b[i];
		}
	}
}

int search_stolbec_with_max_sum(int arr[10][10], int x, int y) {
	int max_sum = arr[0][0];
	int prom_sum = 0;
	int stolb_num_max = 0;
	int stolb_num = 0;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			prom_sum = prom_sum + arr[j][i];
			stolb_num = i;
		}
		if (prom_sum > max_sum) {
			stolb_num_max = stolb_num;
			prom_sum = 0;
		}
	}
	return stolb_num_max;
	
}

int* get_max(int a[10][10], int x, int y, int* ar) {
	int max = a[0][0];
	ar[0] = 0;
	ar[1] = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				ar[0] = i;
				ar[1] = j;
			}
		}
	}
	return ar;
}

int* get_min(int a[10][10], int x, int y, int* ar) {
	int min = a[0][0];
	ar[0] = 0;
	ar[1] = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (a[i][j] <= min)
			{
				min = a[i][j];
				ar[0] = i;
				ar[1] = j;
			}
		}
	}
	return ar;
}

void change(int a[10][10], int min_x, int min_y, int max_x, int max_y) {
	int var = a[min_x][min_y];
	a[min_x][min_y] = a[max_x][max_y];
	a[max_x][max_y] = var;
}

void printf_a(int a[10][10], int x, int y) {
	printf("\nВывод массива\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}


int mainqweqweqwe() {
	setlocale(LC_CTYPE, "");
	int a[10][10];
	int x, y, n; // x - stroka, y - stolbec
	printf("Введите кол-во строк и столбцов: \n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	initialize_a(a, x, y);
	printf_a(a, x, y);
	int ar_max[2];
	int ar_min[2];
	get_max(a, x, y, ar_max);
	get_min(a, x, y, ar_min);
	change(a, ar_min[0], ar_min[1], ar_max[0], ar_max[1]);
	printf_a(a, x, y);

	int nn; // индекс строки в которой меняем значения
	printf("введите индекс строки в которой меняем значения: ");
	scanf_s("%d", &nn);
	change_ten(a, nn, y);
	printf_a(a, x, y);
	printf("введите номера столбцов для перемещения\n");
	int aa, ss; //переменные для столбцов
	scanf_s("%d", &aa);
	scanf_s("%d", &ss);

	change_stolbci(a, aa, y, ss);

	printf_a(a, x, y);

	// int bn; // размер массива b
	// printf("введите размер массива b \n");
	// scanf_s("%d", &bn);
	int b[10];
	initialize_b(b, x);
	int c[10][10];

	make_arr_c(c, a, b, x, y);
	printf("массив с \n");
	printf_a(c, x, y);

	printf("%d", search_stolbec_with_max_sum(a, x, y));
	return 0;
}