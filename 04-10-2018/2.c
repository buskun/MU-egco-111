//
// Created by buskun0 on 04/10/2018.
//

#include <stdio.h>

int main() {
	int num;
	int arr[15];
	printf("Number  : ");
	scanf("%d", &num);
	printf("%2d Data : ", num);

	int sum = 0;
	int min;
	int max;

	int i;
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		if (i == 0) {
			min = arr[i];
			max = arr[i];
		} else {
			if (arr[i] < min) {
				min = arr[i];
			}
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}

	printf("Average : %.2f\n", (float) sum / num);
	printf("Minimum : %d\n", min);
	printf("Maximum : %d\n", max);
	return 0;
}
