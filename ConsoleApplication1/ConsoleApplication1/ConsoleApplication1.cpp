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
	printf_s("введите размер массива(<=10)");
	int nn; // переменная для размера массива
	nn = 10;
	scanf_s("%d", &nn); // задаем размер массива
	float arr[10];
	if (nn <= 10 && nn > 0) {
		for (int i = 0; i < nn; i++) {
			float n; // число для добавления в массив
			scanf_s("%f", &n);
			arr[i] = n; // заполняем массив
		}
	}
	float max, min;
	int ind_max, ind_min;

	max = arr[0]; // начальное значение максимума
	min = arr[0];// начальное значение минимума
	ind_min = 0; // начальное значние индекса минимального элемента
	ind_max = 0;// начальное значние индекса максимального элемента
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) { //находим максимальный элемент
			max = arr[i]; //присваем новое значение переменной максимального элемента
			ind_max = i; //добавляем индекс нового максимального элемента
		}
		if (arr[i] < min) {
			min = arr[i]; //присваем новое значение переменной минимального элемента
			ind_min = i; //добавляем индекс нового минимального элемента
		}
		if (arr[i] == min) {
			ind_min = i; //если значение массива равно старому значению, то  меняем индекс минимального массива
		}
	}
	printf("min = %f(index=%d) \nmax = %f(index = %d)\n", min, ind_min, max, ind_max); // выводим данные


	printf("введите число\n");
	float c;
	scanf_s("%f", &c); // вводим число больше которго будем искать элементы
	int count = 0; //переменная счетчик

	for (int i = 0; i < 10; i++) {
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

	printf("элемента #%d до = %f \nэлемент #%d до= %f\n", d, arr[d], b, arr[b]); //выводим изначальные значения

	float var;//переменная для хранения изначального значения первого элемента
	var = arr[d];
	arr[d] = arr[b]; // изменяем значние первого жлемента
	arr[b] = var; // изменяем значение второго элемента на сохраненное значение

	printf("элемента #%d после = %f \nэлемент #%d после = %f\n", d, arr[d], b, arr[b]); // выводим измененные данные



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
	kkk = 10; // =10, чтобы если нет элемнтов равных 0 кол-во элементов после нуля было равно 0
	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) {
			kkk = i; // находим индекс последнего нулевого элемента
		}
	}

	int countt = 0; // счетчик элементов

	for (int i = kkk; i < 10; i++) {
		countt++; // считаем кол-во элементов
	}


	printf("число элементов больших нуля после последнего нуля = %d\n", countt); // выводим результат


	_getch();
	return 0;



}
