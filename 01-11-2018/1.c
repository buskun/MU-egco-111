//
// Created by buskun0 on 01/11/2018.
//

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("Input: ");
	fflush(stdin);
	gets(str);

	int numberOfVowel = 0;
	int len = strlen(str);
	int i;
	for (i = 0; i < len; i++) {
		switch (str[i]) {
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
				numberOfVowel++;
				break;
			default:;
		}
	}
	printf("Number of Vowel %d", numberOfVowel);
	return 0;
}
