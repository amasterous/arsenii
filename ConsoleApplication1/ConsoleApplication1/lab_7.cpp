#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 
#include <clocale> 
#include <math.h> 
#include <iostream> 


void initialize_arr(int arr[10][10], int x, int y) {
	int n;
	printf("Введите значения элементов\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
		{
			scanf_s("%d", &n);
			arr[i][j] = n;
		}
	}
}

void get_max_and_min(int arr[10][10], int x, int y, int ind_min_x, int ind_min_y, int ind_max_x, int ind_max_y, int min, int max){
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				ind_max_x = i;
				ind_max_y = i;
			}
			if (arr[i][j] <= min)
			{
				min = arr[i][j];
				ind_min_x = i;
				ind_min_y = i;
			}
		}
	}
}

int* get_max(int arr[10][10], int x, int y, int* ar) {
	int max = arr[0][0];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				ar[0] = i;
				ar[1] = j;
			}
		}
	}
	return ar;
}

int* get_min(int arr[10][10], int x, int y, int* ar) {
	int min = arr[0][0];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] <= min)
			{
				min = arr[i][j];
				ar[0] = i;
				ar[1] = j;
			}
		}
	}
	return ar;
}

void change(int arr[10][10], int min_x, int min_y, int max_x, int max_y) {
	int var = arr[min_x][min_y];
	arr[min_x][min_y] = arr[max_x][max_y];
	arr[max_x][max_y] = var;
}

void printf_arr(int arr[10][10], int x, int y) {
	printf("\nВывод массива\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


int main() {
	setlocale(LC_CTYPE, "");
	int arr[10][10];
	int x, y, n; // x - stroka, y - stolbec
	printf("Введите кол-во строк и столбцов: \n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	initialize_arr(arr, x, y);
	printf_arr(arr, x, y);
	int max = arr[0][0];
	int min = arr[0][0];
	int ar_max[2];
	int ar_min[2];
	get_max(arr, x, y, ar_max);
	get_min(arr, x, y, ar_min);
	change(arr, ar_min[0], ar_min[1], ar_max[0], ar_max[1]);
	printf_arr(arr, x, y);




}