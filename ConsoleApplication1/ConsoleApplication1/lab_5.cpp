#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 

#include <clocale> 
#include <math.h> 
#include <iostream> 


/*
Дан массив 10 целые числа онли 
1) удалить из массива (а) первые 5 чисел , массив сдвигается 
2)массив (б) 10 элементов . Ввести с клавы массив (б). Элемент массива b(h)[i]=a[i]*b[i]
3)Сортировка нового а[ ] по возрастанию
*/

int main() {
	setlocale(LC_CTYPE, "");
	// 1)
	int arr[10];
	int n;
	printf("введите числа для массива(только целые числа!) ХД\n");
	int nnn;
	scanf_s("%d", &nnn);
	for (int i = 0; i < nnn; i++) {
		scanf_s("%d", &n);
		arr[i] = n;
	}
	int arr2[10];
	for (int i = 0; i < nnn; i++) {
		arr2[i] = arr[i];
	}
	int tt;
	scanf_s("%d", &tt);
	for (int n = 0; n < tt ; n++) {
		for (int i = 0; i < nnn ; i++) {
			arr[i] = arr[i + 1];
		}
	}
	printf("Массив с удаленными элементами:\n");
	for (int i = 0; i < tt ; i++) {
		printf("[%d] \n", arr[i]);
	}

	// 2)
	int brr[10];
	int bh[10];
	int nn;
	printf("введите элементы массива б\n");
	for (int i = 0; i < nnn ; i++) {
		scanf_s("%d", &nn);
		brr[i] = nn;
		bh[i] = arr2[i] * brr[i];
	}
	printf("Массив b(h)\n");
	for (int i = 0; i < nnn ; i++) {
		printf("[%d] ", bh[i]);
	}

	// 3)Сортировка нового а[ ] по возрастанию
	int c;
	for (int i = 0; i < (nnn-tt) ; i++) {
		for (int j = 0; j < (nnn-tt) ; j++) {
			if (arr[i] < arr[j]) {
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	printf("\n-----\n");
	printf("Массив а[] в порядке возрастания\n ");
	for (int i = 0; i < (nnn-tt) ; i++) {
		printf("%d\n", arr[i]);
	}


	_getch();
	return 0;
}