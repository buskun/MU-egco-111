//
// Created by buskun0 on 01/11/2018.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char names[5][7];
	int i = 0;
	do {
		printf("Name%d : ", i + 1);
		char ch[100];
		fflush(stdin);
		gets(ch);
		if (strlen(ch) != 6) continue;

		int j;
		int numberOfVowel = 0;
		for (j = 0; j < 6; j++) {
			switch (ch[j]) {
				case 'a':;
				case 'e':;
				case 'i':;
				case 'o':;
				case 'u':;
				case 'A':;
				case 'E':;
				case 'I':;
				case 'O':;
				case 'U':
					ch[j] = toupper(ch[j]);
					numberOfVowel++;
					break;
				default:
					ch[j] = tolower(ch[j]);
			}
		}
		if (numberOfVowel != 3) continue;
		strcpy(names[i], ch);
		i++;
		if (i == 5) break;
	} while (1);

	for (i = 0; i < 5; i++) {
		int j;
		for (j = i; j > 0; j--) {
			if (strcmp(names[j], names[j - 1]) >= 0) break;
			char tmp[7];
			strcpy(tmp, names[j]);
			strcpy(names[j], names[j - 1]);
			strcpy(names[j - 1], tmp);
		}
	}

	printf("KeronArmy: ");
	for (i = 0; i < 5; i++) {
		printf("%s ", names[i]);
	}
	return 0;
}
