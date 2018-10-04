//
// Created by buskun0 on 04/10/2018.
//

#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
	int arr[ARRAY_SIZE];
	printf("A : ");

	int i;
	for (i = 0; i < ARRAY_SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < ARRAY_SIZE - 1; i++) {
		int j;
		for (j = i + 1; j < ARRAY_SIZE; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	};

	printf("SortA : ");
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");

	int num;
	do {
		printf("K : ");
		scanf("%d", &num);
		if (num != -100) {
			for (i = 0; i <= ARRAY_SIZE; i++) {
				if (i == ARRAY_SIZE) {
					printf("Not Found!\n");
					break;
				}

				if (arr[i] == num) {
					printf("Position is %d\n", i + 1);
					break;
				}
			}
		}
	} while (num != -100);
	printf("---Bye---");

	return 0;
}
