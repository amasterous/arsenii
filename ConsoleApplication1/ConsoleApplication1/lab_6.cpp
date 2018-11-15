#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 

#include <clocale> 
#include <math.h> 
#include <iostream> 

float input_array(float arr[10][10],int kolvo_strok,int kolvo_stolbcov) {
	float nn;
	for (int i = 0; i < kolvo_strok; i++) {
		for (int j = 0; j < kolvo_stolbcov; j++) {
			scanf_s("%f", &nn);
			arr[i][j] = nn ;
		}
	}
	return arr[kolvo_strok][kolvo_stolbcov];
}

void output_array(float arr[10][10], int kolvo_strok, int kolvo_stolbcov) {
	for (int i = 0; i < kolvo_strok; i++)
	{
		for (int j = 0; j < kolvo_stolbcov; j++)
		{
			printf("%.3f ", arr[i][j]);
		}
		printf("\n");
	}
}

float max_elem(float arr[10][10], int kolvo_strok, int kolvo_stolbcov) {
	int max = arr[0][0];
	for (int i = 0; i < kolvo_strok; i++) {
		for (int j = 0; j < kolvo_stolbcov; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

void change_elems(float arr[10][10], int i, int j, int i2, int j2) {
	float varr;
	varr = arr[i][j];
	arr[i][j] = arr[i2][j2];
	arr[i2][j2] = varr;
}

float sredn_arifm(float arr[10][10], int stroka, int kolvo_stolbcov) {
	float sredn = 0;
	for (int i = 0; i < kolvo_stolbcov; i++)
	{
		sredn = sredn + arr[stroka][i];
	}
	sredn = sredn / (kolvo_stolbcov);
	return sredn;
}

int main() {
	setlocale(LC_CTYPE, "");

	float arr[10][10];

	int kolvo_strok;
	int kolvo_stolbcov;
	printf("введите кол-во строк (<10)");
	scanf_s("%d", &kolvo_strok);
	printf("введите кол-во столбцов (<10)");
	scanf_s("%d", &kolvo_stolbcov);

	input_array(arr,kolvo_strok, kolvo_stolbcov);

	output_array(arr, kolvo_strok, kolvo_stolbcov);

	printf("max = %f\n", max_elem(arr, kolvo_strok, kolvo_stolbcov));
	int x, xx, y, yy;

	printf("введите номер строки: ");
	scanf_s("%d", &x);
	printf("введите номер столбец: ");
	scanf_s("%d", &xx);
	printf("введите номер строки(2): ");
	scanf_s("%d", &y);
	printf("введите номерр столбец(2): ");
	scanf_s("%d", &yy);

	change_elems(arr, x, xx, y, yy);

	output_array(arr, kolvo_strok, kolvo_stolbcov);

	printf("srendee: \n");
	int stroki_now;
	scanf_s("%d", &stroki_now);
	float sredddn;
	sredddn = sredn_arifm(arr, stroki_now, kolvo_stolbcov);
	printf("%f", sredddn);

	_getch();
	return 0;
}