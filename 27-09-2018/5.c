//
// Created by buskun0 on 27/09/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int secret = rand() % 100;
	int correct = 0;
	int min = 0;
	int max = 99;
	int guesses = 0;
	while (!correct) {
		int answer;
		printf("Guess [%d-%d] : ", min, max);
		scanf("%d", &answer);
		if (answer < min || answer > max) { printf("No! Please choose a number in [%d-%d]\n", min, max); }
		else {
			guesses++;
			if (answer < secret) {
				printf("---More than %d---\n", answer);
				min = answer + 1;
			} else if (answer > secret) {
				printf("---Less than %d---\n", answer);
				max = answer - 1;
			} else {
				correct = 1;
			}
		}
	}
	printf("<<<Correct>>>\n");
	printf("It's correct in %d times. ^_^", guesses);
	return 0;
}
