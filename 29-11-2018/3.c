//
// Created by buskun0 on 29/11/2018.
//

#include <stdio.h>

int main() {
	FILE *readFilePointer = fopen("../29-11-2018/data.txt", "r");
	if (readFilePointer == NULL) return 0;

	char ch;
	while ((ch = (char) fgetc(readFilePointer)) != EOF) {
		if (ch == ' ') ch = '*';
		printf("%c", ch);
	}

	return 0;
}
