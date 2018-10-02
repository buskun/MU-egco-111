//
// Created by buskun0 on 02/10/2018.
//

#include <stdio.h>

int main() {
	int num;
	printf("Enter number: ");
	scanf("%d", &num);

	int max;
	int max2;
	int min;
	int min2;
	max = max2 = min = min2 = num;

	while (num >= 0) {
		printf("Enter number: ");
		scanf("%d", &num);
		if (num >= 0) {
			if (max2 < num && max != num) {
				if (max < num) {
					max2 = max;
					max = num;
				} else if (max2 != num) { max2 = num; }
			} else if (max2 == max) {
				max2 = num;
			}

			if (min2 > num && min != num) {
				if (min > num) {
					min2 = min;
					min = num;
				} else { min2 = num; }
			} else if (min2 == min) {
				min2 = num;
			}
		}
	}
	printf("\n");
	printf("Max = %d\n", max);
	printf("2nd Max = %d\n", max2);
	printf("Min = %d\n", min);
	printf("2nd Min = %d\n", min2);
	return 0;
}
