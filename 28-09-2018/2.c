//
// Created by buskun0 on 28/09/2018.
//

#include <stdio.h>

int main() {
	int n;
	printf("Input N : ");
	scanf("%d", &n);

	for (; n >= 1; n--) {
		int fac = 1;
		int i;
		for (i = n; i >= 1; i--) {
			fac *= i;
		}

		printf("%d! = %d\n", n, fac);
	}

	return 0;
}
