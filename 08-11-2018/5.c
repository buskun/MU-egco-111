//
// Created by buskun0 on 08/11/2018.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char string1[100];
	printf("String 1: ");
	scanf("%s", string1);

	char string2[100];
	printf("String 2: ");
	scanf("%s", string2);

	printf("\tResult: ");

	char *compared = (char *) malloc(sizeof(char) * (strlen(string1) + 1));
	*compared = '\0';
	int i;
	for (i = 0; *(string1 + i) != '\0'; i++) {
		if (strchr(compared, *(string1 + i)) != NULL) continue;

		strncat(compared, string1 + i, 1);

		int j;
		for (j = 0; *(string2 + j) != '\0'; j++) {
			if (*(string1 + i) == *(string2 + j)) {
				printf("%c", *(string1 + i));
				break;
			}
		}
	}

	return 0;
}
