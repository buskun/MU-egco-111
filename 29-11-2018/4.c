//
// Created by buskun0 on 29/11/2018.
//

#include <stdio.h>

int main() {
	FILE *readFilePointer = fopen("../29-11-2018/input.txt", "r");
	if (readFilePointer == NULL) return 0;

	FILE *writeFilePointer = fopen("../29-11-2018/output.txt", "w");
	if (writeFilePointer == NULL) return 0;

	char line[100];
	while (!feof(readFilePointer)) {
		fgets(line, 100, readFilePointer);

		int status = 0;
		int i;
		for (i = 0; line[i] != '\0'; i++) {
			if (line[i] == '(') { status++; }
			else if (line[i] == ')') status--;
			if (status < 0) break;
		}

		if (status == 0) { fprintf(writeFilePointer, "Matched\n"); }
		else { fprintf(writeFilePointer, "Not matched\n"); }
	}

	return 0;
}
