//
// Created by buskun0 on 28/09/2018.
//

#include <stdio.h>

int main() {
	int studentID, count = 0;
	printf("StudentID : ");
	scanf("%d", &studentID);
	int i;
	for (i = 1; i <= studentID; i++) {
		if (studentID % i == 0) {
			printf("%-7d ", i);
			if (count % 5 == 4) printf("\n");
			count++;
		}
	}
	printf("\n");
	printf("Count = %d", count);
	return 0;
}
