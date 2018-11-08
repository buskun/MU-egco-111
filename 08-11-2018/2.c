//
// Created by buskun0 on 08/11/2018.
//

#include <stdio.h>
#include <ctype.h>

int main() {
	char sentence[100];
	printf("Input: ");
	fflush(stdin);
	gets(sentence);

	int nVowel[5] = { 0 };
	int i;
	for (i = 0; *(sentence + i) != '\0'; i++) {
		switch (tolower(*(sentence + i))) {
			case 'a':
				nVowel[0]++;
				break;
			case 'e':
				nVowel[1]++;
				break;
			case 'i':
				nVowel[2]++;
				break;
			case 'o':
				nVowel[3]++;
				break;
			case 'u':
				nVowel[4]++;
				break;
			default:;
		}
	}

	printf("a => %d\n", nVowel[0]);
	printf("e => %d\n", nVowel[1]);
	printf("i => %d\n", nVowel[2]);
	printf("o => %d\n", nVowel[3]);
	printf("u => %d\n", nVowel[4]);

	return 0;
}
