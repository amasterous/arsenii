#pragma warning(disable:4996) 
#include "pch.h" 
#include <conio.h> 
#include <stdio.h> 

#include <clocale> 
#include <math.h> 
#include <iostream> 


/*
��� ������ 10 ����� ����� ���� 
1) ������� �� ������� (�) ������ 5 ����� , ������ ���������� 
2)������ (�) 10 ��������� . ������ � ����� ������ (�). ������� ������� b(h)[i]=a[i]*b[i]
3)���������� ������ �[ ] �� �����������
*/

int main() {
	setlocale(LC_CTYPE, "");
	// 1)
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i * i;
	}
	int arr2[10];
	for (int i = 0; i < 10; i++) {
		arr2[i] = arr[i];
	}
	for (int n = 0; n < 5; n++) {
		for (int i = 0; i < 10; i++) {
			arr[i] = arr[i + 1];
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	// 2)
	int brr[10];
	int bh[10];
	printf("������� �������� ������� �\n");
	for (int i = 0; i < 10; i++) {
		int n;
		scanf_s("%d", &n);
		brr[i] = n;
		bh[i] = arr2[i] * brr[i];
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", bh[i]);
	}

	// 3)���������� ������ �[ ] �� �����������
	int c;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i] < arr[j]) {
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	printf("\n-----\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}


	_getch();
	return 0;
}