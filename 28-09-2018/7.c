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
			if (j == 0 || j == n - 1 || i == 0 || i == n - 1) { printf("*"); }
			else { printf(" "); }
		}
		printf("\n");
	}
	return 0;
}
