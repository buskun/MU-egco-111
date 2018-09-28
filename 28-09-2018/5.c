//
// Created by buskun0 on 28/09/2018.
//

#include <stdio.h>

int main() {

	int n;
	printf("Input : ");
	scanf("%d", &n);

	int i;
	for (i = n; i >= 1; i--) {
		int j;
		for (j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}
