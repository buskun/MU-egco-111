//
// Created by buskun0 on 29/11/2018.
//

#include <stdio.h>

int main() {
	FILE *fp = fopen("../29-11-2018/number.txt", "r");
	if (fp == NULL) return 0;
	FILE *fp2 = fopen("../29-11-2018/result.txt", "w");
	if (fp2 == NULL) return 0;
	int num;
	int sum = 0;
	while (!feof(fp)) {
		fscanf(fp, "%d", &num);
		sum += num;
		fprintf(fp2, "%d ", num);
		printf("%d ", num);
	}
	fprintf(fp2, "\n");
	fprintf(fp2, "Sum = %d", sum);
	printf("\n");
	printf("Sum = %d", sum);
	fclose(fp);
	fclose(fp);
	return 0;
}
