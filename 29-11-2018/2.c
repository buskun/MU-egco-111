//
// Created by buskun0 on 29/11/2018.
//

#include <stdio.h>

int main() {
	FILE *writeFilePointer = fopen("../29-11-2018/Table.txt", "w");
	if (writeFilePointer == NULL) return 0;

	int i;
	for (i = 2; i <= 12; i++) {
		int j;
		for (j = 1; j <= 12; j++) {
			fprintf(writeFilePointer, "%d * %d = %d\n", i, j, i * j);
		}
		if (i == 12) continue;
		fprintf(writeFilePointer, "------------\n");
	}

	fclose(writeFilePointer);

	return 0;
}
