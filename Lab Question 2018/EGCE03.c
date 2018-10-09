//
// Created by buskun0 on 09/10/2018.
//

#include <stdio.h>

int main() {
	do {
		char ch[5];
		printf("Student ID: ");
		scanf(" %c%c%c%c%c", &ch[0], &ch[1], &ch[2], &ch[3], &ch[4]);
		// check if is there 4th character
		if (ch[4] != '\n') continue;
		// check if first character is not s
		if (ch[0] != 's') {
			// check if student id is '0000'
			if (ch[0] == '0' && ch[1] == '0' && ch[2] == '0' && ch[3] == '0') { break; }
			else { continue; }
		}
		printf("\n");

		int totalWrong = 0, totalCorrect = 0;
		int wrongAns[7] = { 0 };
		int minWrong = 0;

		int doneQuestionNumber;
		for (doneQuestionNumber = 0; doneQuestionNumber < 7; doneQuestionNumber++) {
			char ans;
			do {
				printf("Question %d (t/f/s): ", doneQuestionNumber + 1);
				scanf(" %c", &ans);
				if (ans == 's') break;
				if (ans == 't') {
					totalCorrect++;
					break;
				}
				if (ans == 'f') {
					totalWrong++;
					wrongAns[doneQuestionNumber]++;
				}
			} while (1);
			if (ans == 's') {
				doneQuestionNumber++;
				break;
			}
			if (doneQuestionNumber != 6) printf("\n");
		}

		printf("----------------------------\n");
		printf("%s", ch);

		int questionNumber;
		for (questionNumber = 0; questionNumber < doneQuestionNumber; questionNumber++) {
			if (questionNumber == 0) {
				minWrong = wrongAns[0];
			} else if (minWrong > wrongAns[questionNumber]) {
				minWrong = wrongAns[questionNumber];
			}
			printf("Q%d %d: ", questionNumber + 1, wrongAns[questionNumber]);
			int i;
			for (i = 0; i < wrongAns[questionNumber]; i++) {
				printf("X");
			}
			printf("\n");
		}

		printf("Min Wrong   = ");
		for (questionNumber = 0; questionNumber < doneQuestionNumber; questionNumber++) {
			if (minWrong == wrongAns[questionNumber]) {
				printf("Q%d ", questionNumber + 1);
			}
		}
		printf("\n");

		printf("Total Score = %d-%d = %d\n", totalCorrect * 10, totalWrong, totalCorrect * 10 - totalWrong);

		printf("----------------------------\n");

	} while (1);
	printf("--- End ---");
	return 0;
}
