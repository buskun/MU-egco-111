//
// Created by buskun0 on 02/10/2018.
//

#include <stdio.h>

int main() {
	int price;
	printf("Enter price: ");
	scanf("%d", &price);
	printf("____________________\n");

	int n1 = 0;
	int n5 = 0;
	int n10 = 0;
	int n20 = 0;
	int n50 = 0;
	int n100 = 0;
	do {
		int money;
		printf("Enter money (100, 50, 20, 10, 5, 1): ");
		scanf("%d", &money);

		switch (money) {
			case 1:;
			case 5:;
			case 10:;
			case 20:;
			case 50:;
			case 100:
				price -= money;
				break;
			default:
				printf("Error! Invalid money.\n\n");
				continue;
		}

		if (price > 0) {
			printf("Remaining price: %d\n\n", price);
		}
	} while (price > 0);
	price = -price;
	printf("Complete!!! Change is %d Baht\n", price);

	int moneyMap[6] = { 100, 50, 20, 10, 5, 1 };
	int i;
	for (i = 0; i < 6; i++) {
		int counter = 0;
		while (price >= moneyMap[i]) {
			price -= moneyMap[i];
			counter++;
		}
		if (counter > 0) {
			printf("%d baht ");
			if (moneyMap[i] >= 20) { printf("bank note"); }
			else { printf("coin"); }
			printf(" = %d\n", counter);
		}
	}

	return 0;
}
