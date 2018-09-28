//
// Created by buskun0 on 28/09/2018.
//

#include <stdio.h>

int main() {
	int n;
	float sum = 0;
	printf("Number of Student (n) : ");
	scanf("%d", &n);

	int i;
	for (i = 1; i <= n; i++) {
		float score;
		printf("Student %d : ", i);
		scanf("%f", &score);
		sum += score;
	}

	printf("Average = %.2f", sum / n);
	return 0;
}
