#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>

char** mGen(int n, int m);
void check(char** str, int m, int n);

int main()
{
	setlocale(LC_ALL, "");
	int n; // количество строк
	int m; // количество символов в строке
	printf("Введите порядок матрицы: ");
	scanf_s("%d", &n);
	printf("\nВведите количество символов в строке: ");
	scanf_s("%d", &m);
	mGen(n, m);
}