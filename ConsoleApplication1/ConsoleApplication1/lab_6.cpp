#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 

#include <clocale> 
#include <math.h> 
#include <iostream> 


float input_array(float arr[10][10],int kolvo_strok,int kolvo_stolbcov) {

	for (int i = 0; i < kolvo_strok; i++) {
		for (int j = 0; j < kolvo_stolbcov; j++) {
			arr[i][j] = i * j;
		}
	}
	return arr[kolvo_strok][kolvo_stolbcov];
}

void output_array(float arr[10][10], int kolvo_strok, int kolvo_stolbcov) {
	for (int i = 0; i < kolvo_strok; i++) {
		for (int j = 0; j < kolvo_stolbcov; j++) {
			printf("[%d][%d] = %f\n", i, j, arr[i][j]);
		}
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

	printf("max = %f", max_elem(arr, kolvo_strok, kolvo_stolbcov));
	int x, xx, y, yy;
	printf("введите номер строки: ");
	scanf_s("%f", &x);
	printf("введите номер столбец: ");
	scanf_s("%f", &xx);
	printf("введите номер строки(2): ");
	scanf_s("%f", &x);
	printf("введите номер столбец(2): ");
	scanf_s("%f", &xx);
	printf("%f");

}