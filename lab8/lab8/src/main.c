#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void squareMatrix(long int arr[][10], long int B, long int C);
void primenumber(int k);

int main(int argc, char *argv[])

{
	long int A[10][10], b, c, i, j, y = 2, t;
	int a;
	char *N;

	if (argc > 1)

	{
		t = strtol(argv[1], &N, 10);

		b = t;

		c = t;

		for (i = 0; i <= b - 1; i++)

		{
			for (j = 0; j <= c - 1; j++)

			{
				A[i][j] = strtol(argv[y], &N, 10);

				y++;
			}
		}

	} else {
		b = y;

		c = y;

		for (i = 0; i <= b - 1; i++)

		{
			for (j = 0; j <= c - 1; j++)

			{
				A[i][j] = strtol(argv[y], &N, 10);

				y++;
			}
		}
	}
	squareMatrix(A, b, c); /** записывает матрицу с количеством строчек и стобцов */

	srand((unsigned int)time(NULL));
	a = (rand() % 49) + 2;
	primenumber(a);
}

void squareMatrix(long int arr[][10], long int B, long int C)
{
	long int MAT[10][10], b = B, c = C, i, j, f;

	/** цикл который умножает матрицу саму на себя */
	for (i = 0; i < b; i++)

	{
		for (j = 0; j < c; j++)

		{
			MAT[i][j] = 0;

			for (f = 0; f < c; f++)

			{
				MAT[i][j] += arr[i][f] * arr[f][j];
			}
		}
	}
	/** цикл котрый записывает матрицу */
	for (i = 0; i < b; i++)

	{
		for (j = 0; j < c; j++)

		{
			printf("%ld\t", MAT[i][j]);
		}

		printf("\n");
	}
}

void primenumber(k)

{
	int res = 1, i;

	for (i = 2; k % i != 0; i++)

	{
	}
	if (k == i && res == 1)

	{
		res = 0;

		if (res == 0)

		{
			printf("Число простое! %d\n", k);
		}
	}
	if (res != 0) {
		{
			printf("Число не простое! %d\n", k);
		}
	}
}
