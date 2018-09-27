//
// Created by buskun0 on 27/09/2018.
//
#include <stdio.h>

int main() {
	int n, counter = 0;
	printf("Input: ");
	scanf("%d", &n);
	int i = 1;
	while (i <= n) {
		if (i % 3 == 0 || i % 7 == 0) counter++;
		i++;
	}
	printf("Count = %d", counter);
	return 0;
}
