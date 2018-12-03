//
// Created by buskun0 on 15/11/2018.
//

#include <stdio.h>

int fac(int);

int main() {
	printf("Input : ");
	int n;
	scanf("%d", &n);
	printf("Output : \n");
	int i;
	for (i = n; i >= 0; i--) {
		printf("  %d! = %d\n", i, fac(i));
	}
	return 0;
}

int fac(int n) {
	if (n <= 0) return 1;
	return n * fac(n - 1);
}
