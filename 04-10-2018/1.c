//
// Created by buskun0 on 04/10/2018.
//

#include <stdio.h>

#define ARRAY_SIZE 9

int main() {
	int i;
	int fibo[ARRAY_SIZE] = { 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	printf("%s %15s \n", "Element", "Data");
	for (i =  ARRAY_SIZE - 1; i >= 0; i--) {
		printf("fibo[%2d] %14d \n", i, fibo[i]);
	}
	return 0;
}
