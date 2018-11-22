#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#pragma warning(disable:4996)
#include <clocale>
#include <math.h>
#include <iostream>

int _tmaqwein(int argc, _TCHAR* argv[])
{
setlocale (LC_CTYPE,"");
float a[10];
float an[10];
int n;
int i, k;

system("color 0F" );


puts ("введите размерность массива n");
scanf ("%d", &n);
if ((n>0)&&(n<=10))
  {
    puts ("введите переменные");
    for (i=0; i<n; i++)
      {
        scanf ("%f", &a[i]);
      }

puts ("введите количество первых элементов массива, которое необходимо удалить:");
scanf ("%d", &k);

for ((i=0); i<(n-k); i++)
  {
    an[i]=a[i+k];
  }
printf ("Новый массив:\n");
for (i=0; i<(n-k); i++)
printf ("%f\n", an[i]);


// 2 пункт 
float b[10];
printf ("Введите элементы второго массива (b):\n");
for (i=0;i<(n-k);i++)
scanf ("%f", &b[i]);


printf ("Новый массив (b): \n");
for (i=0;i<(n-k);i++)
  {
    b[i]=an[i]*b[i];
    printf ("%f\n", b[i]);
  }

//3 пункт
float c=0;
int r;
for (i=0; i<(n-k);i++)
  for (r=i; r<(n-k); r++)
    if (an[i]>an[r])
      {
        c=an[i];
        an[i]=an[r];
        an[r]=c;
      }
printf ("Новый массив после сортировки:\n");
for (i=0; i<(n-k); i++)
printf ("%f\n", an[i]);

  }
else
  {
    printf ("размерность массива введена неверно");
  }
getch ();
return 0;
}
