//
// Created by buskun0 on 04/10/2018.
//

#include <stdio.h>

int main() {
	int N;
	int matrix[10][10];
	do {
		printf("N = ");
		scanf("%d", &N);
	} while (!(0 < N && N < 10));

	int i;
	for (i = 0; i < N; i++) {
		int j;
		for (j = 0; j < N; j++) {
			matrix[i][j] = i * N + j + 1;
		}
	}

	int sum = 0;

	for (i = 0; i < N; i++) {
		int j;
		for (j = 0; j < N; j++) {
			printf("%2d ", matrix[i][j]);
		}

		printf("   ");

		for (j = 0; j < N; j++) {
			if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
				printf("%2d ", matrix[i][j]);
				sum += matrix[i][j];
			} else {
				printf("   ");
			}
		}

		printf("\n");
	}
	
	printf("Sum of frame = %d", sum);
	return 0;
}
