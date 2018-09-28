//
// Created by buskun0 on 28/09/2018.
//

#include <stdio.h>

int main() {
	int num;
	do {
		int not_prime = 0;
		printf("Enter a number: ");
		scanf("%d", &num);
		if (num >= 2) {
			int i;
			for (i = 2; i < num; i++) {
				if (num % i == 0) {
					not_prime = 1;
				}
			}
			if (!not_prime) {
				printf("Result: %d is a prime number.\n", num);
				printf("----\n");
			} else {
				printf("Result: %d is not a prime number.\n", num);
				printf("----\n");
			}
		}
	} while (num >= 2);
	printf("---Bye---");
	return 0;
}
