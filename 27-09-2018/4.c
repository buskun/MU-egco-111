//
// Created by buskun0 on 27/09/2018.
//
#include <stdio.h>

int main() {
	int num;
	do {
		printf("Input : ");
		scanf("%d", &num);
		if (num >= 0) {
			if (num % 2 == 0) {
				printf("Output: Even");
			} else {
				printf("Output: Odd");
			}
			printf("\n- - - - - - - - - - - -\n");
		} else { printf("Bye...\n"); }
	} while (num >= 0);
	return 0;
}
