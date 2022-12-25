#define _CRT_SECURE_NO_WARNINGS
#define Z 10
#define P 0
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

double* ptr_ar22;
int n = 0;
int N = 0;
int bl = 0;

int task4() {
	float* a;
	float* b;
	float* c;
	float* d;
	int j = 0;
	int size1 = 0;
	int size2 = 0;
	int size3 = 0;
	float sum = 0;
	srand(time(0));

	size1 = ((float)rand() / RAND_MAX) * (Z - 0) + P;
	a = malloc(size1 * sizeof(float));
	for (int i = 0; i < size1; i++) {
		a[i] = ((float)rand() / RAND_MAX) * (10 - 0);
	}
	printf("Массив а size %d\n", size1);
	for (int i = 0; i < size1; i++) {
		printf("%f  ", a[i]);
	}
	printf("\n");

	size2 = ((float)rand() / RAND_MAX) * (Z - 0) + P;
	b = malloc(size2 * sizeof(float));
	for (int i = 0; i < size2; i++) {
		b[i] = ((float)rand() / RAND_MAX) * (10 - 0);
	}
	printf("Массив b size %d\n", size2);
	for (int i = 0; i < size2; i++) {
		printf("%f  ", b[i]);
	}
	printf("\n");


	size3 = ((float)rand() / RAND_MAX) * (Z - 0) + P;
	c = malloc(size3 * sizeof(float));
	for (int i = 0; i < size3; i++) {
		c[i] = ((float)rand() / RAND_MAX) * (10 - 0);
		sum = sum + c[i];
	}
	printf("Массив c size %d\n", size3);
	for (int i = 0; i < size3; i++) {
		printf("%f  ", c[i]);
	}
	printf("\n");

	printf("Сумма с = %f\n", sum);
	j = size2 - 1;
	d = malloc((size1 + size2 + 1) * sizeof(float));
	for (int i = 0; i < size1 + size2 + 1; i++) {
		if (i < size1) d[i] = a[i];
		if (i < size2 && i >= size1) {
			d[i] = b[j];
			j = j - 1;

		}
		if (i == size2) d[i] = sum;
	}
	printf("Массив d size %d\n", size1 + size2 + 1);
	for (int i = 0; i < size1 + size2 + 1; i++) {
		printf("%f  ", d[i]);
	}
}



int insert(int* a, int size, int N) {
	int size_n = size + N;
	int* an;
	int n = 0;
	if (a == NULL) return NULL;
	an = malloc(size_n * sizeof(int));
	for (int i = 0; i < size_n; i++) {
		if (i < size) an[i] = a[i];
		else an[i] = 0;
	}
	for (int i = 0; i < size_n; i++) {
		if (an[i] > 0) {
			for (int j = size + n; j > i; j--) {
				an[j] = an[j - 1];
			}
			an[i + 1] = -999;
			n = n + 1;
		}
	}
	printf("\nКонечный массив\n");
	for (int i = 0; i < size + N; i++) {
		printf("%d ", an[i]);
	}
}

void task2_2() {
	int* a;
	int size;
	int flag = 0;
	int N = 0;
	srand(time(0));
	puts("Введите размер массива");
	scanf("%d", &size);
	a = malloc(size * sizeof(int));
	if (a == NULL) {
		puts("error");
		return -1;
	}
	for (int i = 0; i < size; i++) {
		flag = ((float)rand() / RAND_MAX) * (2 - 0);
		if (flag == 1) {
			a[i] = ((float)rand() / RAND_MAX) * (100 - 0);
		}
		if (flag == 0) {
			a[i] = ((float)rand() / RAND_MAX) * (100 - 0) * (-1);
		}
	}
	printf("\nИзначальный массив\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	for (int i = 0; i < size; i++) {
		if (a[i] > 0) {
			N = N + 1;
		}
	}
	printf("\nПоложительных числел %d\n", N);  /*количество положительных чисел в массиве*/
	insert(a, size, N);


}
int checch(double* ptr_ar22, int size) {
	for (int i = 0; i < size; i++) {
		if (ptr_ar22[i] < 0) {
			N = N + 1;

		}
	}

}
int delete_k(double* ptr_ar, int size) {
	int k;
	printf("\n");
	for (int i = 0; i < size; i++) {
		ptr_ar22[i] = ptr_ar[i];
		printf("%lf  ", ptr_ar22[i]);
	}
	for (int i = 0; i < size; i++) {
		if (ptr_ar22[i] < 0) {
			bl = bl + 1;

		}
	}

	for (int l = 0; l < size; l++) {
		if (checch(ptr_ar22, size) > 0) {
			for (int i = 0; i < size; i++) {
				if (ptr_ar22[i] < 0) {

					for (int j = i; j < (size - n - 1); j++) {
						ptr_ar22[j] = ptr_ar22[j + 1];
						/*printf("\n");
						for (int k = 0; k < (size); k++) {     ВЫВОД КАЖДОГО ШАГА
							printf("%lf  ", ptr_ar22[k]);
						}
						printf("\n");*/
					}

				}


			}
			n = n + 1;
		}
	}
}
void task1() {
	int* ptr_ar;
	int* ptr_ar2;
	int size;
	int flag = 0;
	int count = 0;
	int max = 0;
	int I = 0;
	int j = 0;
	srand(time(0));
	puts("Введите размер массива");
	scanf("%d", &size);
	ptr_ar = malloc(size * sizeof(int));
	if (ptr_ar == NULL) {
		puts("error");
		return -1;
	}
	for (int i = 0; i < size; i++) {
		flag = ((float)rand() / RAND_MAX) * (2 - 0);
		if (flag == 1) {
			ptr_ar[i] = ((float)rand() / RAND_MAX) * (100 - 0);
		}
		if (flag == 0) {
			ptr_ar[i] = ((float)rand() / RAND_MAX) * (100 - 0) * (-1);
		}
	}
	printf("\nИзначальный массив\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", ptr_ar[i]);
	}

	for (int i = 0; i < size; i++) {
		if (ptr_ar[i] > max) {
			max = ptr_ar[i];
			I = i;
		}
	}
	for (int i = 0; i <= I; i++) {
		if (ptr_ar[i] > 0) {		/*Без учета 0*/
			count += 1;
		}

	}
	count = count - 1;
	ptr_ar2 = malloc(count * sizeof(int));
	for (int i = 0; i < I; i++) {
		if (ptr_ar[i] > 0) {
			ptr_ar2[j] = ptr_ar[i];
			j = j + 1;
		}
	}
	printf("\nМассив с новыми значениями\n");
	for (int i = 0; i < count; i++) {
		printf("%d ", ptr_ar2[i]);
	}
	if (j == 0) {
		printf("Массив пуст\n");
	}
	free(ptr_ar);
	free(ptr_ar2);
}

void task2() {
	double* ptr_ar;
	int size;
	int flag = 0;
	srand(time(0));
	puts("Введите размер массива");
	scanf("%d", &size);
	ptr_ar = malloc(size * sizeof(double));
	if (ptr_ar == NULL) {
		puts("error");
		return -1;
	}
	for (int i = 0; i < size; i++) {
		flag = ((float)rand() / RAND_MAX) * (2 - 0);
		if (flag == 1) {
			ptr_ar[i] = ((double)rand() / RAND_MAX) * (1 - 0);
		}
		if (flag == 0) {
			ptr_ar[i] = ((double)rand() / RAND_MAX) * (1 - 0) * (-1);
		}
	}
	printf("\nИзначальный массив\n");
	for (int i = 0; i < size; i++) {
		printf("%lf ", ptr_ar[i]);
	}
	ptr_ar22 = malloc(size * sizeof(double));
	delete_k(ptr_ar, size);
	printf("\nКонечный массив\n");
	printf("%d\n", bl);
	for (int i = 0; i < (size - bl); i++) {

		printf("%lf ", ptr_ar22[i]);

	}
}

void main() {
	setlocale(LC_ALL, "ru_RU");
	task4();
}