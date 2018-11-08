#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 

#include <clocale> 
#include <math.h> 
#include <iostream> 

int mains()
{
	setlocale(LC_CTYPE, "");
	printf_s("введите размер массива(<=10)");
	int nn; 
	scanf_s("%d", &nn); 
	float arr[10];
	if (nn <= 10 && nn > 0) {
		for (int i = 0; i < nn; i++) {
			float n; 
			scanf_s("%f", &n);
			arr[i] = n;
		}
	}
	float max, min;
	int ind_max;

	max = arr[0]; 
	min = arr[0];
	ind_max = 0;
	for (int i = 1; i < nn; i++) {
		if (arr[i] > max) { 
			max = arr[i]; 
			ind_max = i; 
		}
		if (arr[i] < min) {
			min = arr[i]; 
		}

	}
	printf("min = %f \nmax = %f(index = %d)\n", min, max, ind_max); 


	printf("введите число\n");
	float c;
	scanf_s("%f", &c); // вводим число больше которго будем искать элементы
	int count = 0; //переменная счетчик

	for (int i = 0; i < nn; i++) {
		if (arr[i] > c) {
			count++; //считаем эти элементы
		}
	}
	// выводим результаты
	printf("count = %d\n", count);
	printf("введите два числа(индексы массивa < 10) \n");


	// будем менять значения массива
	int d, b;
	scanf_s("%d", &d); // номер первого элемента
	scanf_s("%d", &b); // номер второго элемента 
	

	
	if ((d < nn && d >= 0) && (b < nn && b >= 0)) {
		printf("элемента №%d до = %f \nэлемент №%d до= %f\n", d, arr[d], b, arr[b]); //выводим изначальные значения
		float var;//перемен	ная для хранения изначального значения первого элемента
		var = arr[d];
		arr[d] = arr[b];
		arr[b] = var; 

		printf("элемента №%d после = %f \nэлемент №%d после = %f\n", d, arr[d], b, arr[b]); // выводим измененные данные
	}
	else {
		printf("индекс неправильный");
		_getch();
		return 0;
	}
	

	int ind_min;

	max = arr[0];
	min = arr[0];
	ind_max = 0;
	ind_min = 0;

	for (int i = 0; i < nn; i++) {
		if (arr[i] > max) {
			max = arr[i];
			ind_max = i;
		}
		if (arr[i] < min) {
			min= arr[i];
			ind_min = i;
		}
		if (arr[i] == min) {
			
			ind_min= i;
		}
	}

	//меняем местами максимальный и минимальный элементы
	printf("элемента #max до = %f \nэлемент #min до= %f\n", arr[ind_max], arr[ind_min]); //выводим начальные данные

	// здесь всё так же
	float varr;
	varr = arr[ind_max];
	arr[ind_max] = arr[ind_min];
	arr[ind_min] = varr;

	printf("элемента #max после = %f \nэлемент #min после = %f\n", arr[ind_max], arr[ind_min]);// выводим измененные данные
	
	// будем искать элементы больше последнего нуля

	int kkk;
	kkk = nn; // =числу элемнтов в массиве, чтобы если нет элемнтов равных 0 кол-во элементов после нуля было равно 0

	for (int i = 0; i < nn; i++) {
		if (arr[i] == 0) {
			kkk = i; // находим индекс последнего нулевого элемента
		}
	}

	int countt = 0; // счетчик элементов

	for (int i = kkk; i < nn; i++) {
		if (arr[i] > 0) { // проверяем больше ли число 0
			countt++; // считаем кол-во элементов
		}
		
	}

	printf("число элементов больших нуля после последнего нуля = %d\n", countt); // выводим результат

	_getch();
	return 0;
}
