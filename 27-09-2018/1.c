//
// Created by buskun0 on 27/09/2018.
//
#include <stdio.h>

int main() {
	int price;
	int distance;
	int total_price = 0;
	printf("Price      : ");
	scanf("%d", &price);
	printf("Distance   : ");
	scanf("%d", &distance);
	printf("TotalPrice : ");
	total_price += price;

	if (price < 5000) {
		if (distance > 15) {
			total_price += (15 * 5);
		} else {
			total_price += (distance * 5);
			printf("%d", total_price);
			return 0;
		}
	}

	if (distance > 20) {
		total_price += (5 * 10);
	} else {
		total_price += (distance - 15) * 10;
		printf("%d", total_price);
		return 0;
	}

	if (distance > 30) {
		total_price += (10 * 15);
	} else {
		total_price += (distance - 20) * 15;
		printf("%d", total_price);
		return 0;
	}

	if (distance > 40) {
		total_price += (10 * 20);
	} else {
		total_price += (distance - 30) * 20;
		printf("%d", total_price);
		return 0;
	}

	if (distance > 50) {
		total_price += (10 * 25);
		total_price += (distance - 50) * 30;
		printf("%d", total_price);
		return 0;
	} else {
		total_price += (distance - 40) * 25;
		printf("%d", total_price);
		return 0;
	}

}
