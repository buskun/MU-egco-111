//
// Created by buskun0 on 28/09/2018.
//

#include <stdio.h>

int main() {
	int n;
	printf("Input : ");
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; i++) {
		int j;
		for (j = 0; j < n; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
