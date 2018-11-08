//
// Created by buskun0 on 08/11/2018.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Number of student: ");
	scanf("%d", &n);

	float *scores = (float *) malloc(sizeof(float) * n);

	int i;
	for (i = 0; i < n; i++) {
		printf("Student [%d]: ", i + 1);
		scanf("%f", scores + i);
	}

	float avg = 0;

	for (i = 0; i < n; i++) {
		avg += *(scores + i);
	}

	printf("Average score of %d students is %.1f", n, avg / n);

	return 0;
}
