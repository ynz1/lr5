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

char** mGen(int n, int m)
{
	char** str; // массив указателей

	str = (char**)calloc((n * n) + 1, sizeof(char*)); // выделить память под массив указателей
	for (int i = 0; i <= n * n; i++)
	{
		str[i] = (char*)calloc(m + 2, sizeof(char)); //выделить память под строку
	}

	printf("\nВведите %d строк длинной не более %d символов: \n", n * n, m);
	for (int i = 0; i <= n * n; i++)
	{
		fgets(str[i], m + 2, stdin);
	}

	printf("\nВаши строки:\n");
	for (int i = 0; i <= n * n; i++)
	{
		printf_s("\r%s", str[i]);
	}

	check(str, m, n);
	return str;
}

void check(char** str, int m, int n)
{
	char* temp;

	printf("\nВведите строку: ");
	temp = (char*)calloc(m + 2, sizeof(char));

	fgets(temp, m + 2, stdin);

	printf("\nНовая матрица:\n");
	for (int i = 0; i <= n * n; i++)
	{
		if (strcmp(str[i], temp) != 0)
		{
			printf("%s", str[i]);
		}
	}
}