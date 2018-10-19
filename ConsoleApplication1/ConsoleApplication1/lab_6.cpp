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

float max_elem

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


}