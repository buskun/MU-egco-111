//
// Created by buskun0 on 27/09/2018.
//
#include <stdio.h>

int main() {
	int num = 1;
	int sum = 0;

	while (num <= 100) {
		sum += num;
		num += 2;
	}

	printf("Sum is %d", sum);
	return 0;
}
