//
// Created by buskun0 on 09/10/2018.
//

#include <stdio.h>

int main() {
	int N;
	int matrix[100][100];
	printf("Number of NxN matrix: ");
	scanf("%d", &N);

	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Matrix [%d, %d]: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}

	int sum = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i == j || i == N - 1 - j) {
				printf("   ");
			} else {
				printf("%3d", matrix[i][j]);
				sum += matrix[i][j];
			}
			printf("  ");
		}
		printf("\n");
	}
	printf("Sum of matrix = %d", sum);
	return 0;
}
