//
// Created by buskun0 on 22/11/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printScore(int score);

int main() {

	srand(time(NULL));

	struct student {
		char name[50];
		int midScore;
		int finalScore;
	};

	struct student studentsData[10];

	int i;
	for (i = 0; i < 10; i++) {
		printf("Student %d name : ", i);
		scanf("%s", studentsData[i].name);
	}

	do {
		for (i = 0; i < 10; i++) {
			studentsData[i].midScore = rand() % 11;
			studentsData[i].finalScore = rand() % 11;
		}

		printf("               Midterm        Final\n");

		for (i = 0; i < 10; i++) {
			printf("%10s  :  ", studentsData[i].name);
			printScore(studentsData[i].midScore);
			printf("  |  ");
			printScore(studentsData[i].finalScore);
			printf("\n");
		}

		char choiceNewGraph[10];
		printf("New graph? (Y/N) : ");
		scanf("%s", choiceNewGraph);
		if (strcmp(choiceNewGraph, "Y") != 0 && strcmp(choiceNewGraph, "y") != 0) {
			break;
		}
	} while (1);

	return 0;
}

void printScore(int score) {
	int i;
	for (i = 0; i < 10; i++) {
		if (i < score) {
			printf("x");
		} else {
			printf(" ");
		}
	}
}
