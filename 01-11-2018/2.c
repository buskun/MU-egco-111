//
// Created by buskun0 on 01/11/2018.
//

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	do {
		printf("Input a word: ");
		fflush(stdin);
		gets(str);

		if (strcmp(str, "quit") == 0) break;
		
		int len = strlen(str);
		int isPalindrome = 1;
		int i;
		for (i = 0; i < len / 2; i++) {
			if (str[i] != str[len - i - 1]) isPalindrome = 0;
		}
		if (isPalindrome) { printf("--> Palindrome \n"); }
		else { printf("--> Non-Palindrome \n"); }
	} while (strcmp(str, "quit") != 0);
	return 0;
}
