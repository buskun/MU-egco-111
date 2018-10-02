//
// Created by buskun0 on 02/10/2018.
//

#include <stdio.h>

int main() {
	char gradeMap[5][2] = { "A", "B", "C", "D", "F" };
	char subjectMap[4][6] = { "CO111", "MA115", "PY151", "TH100" };
	int data[5][4] = { };
	int totalExaminer[6] = { 0, 0, 0, 0, 0, 0 };
	int minExaminerSubject[5] = { 0, 0, 0, 0, 0 };
	int minSubject[2] = { 0, 0 };

	int grade;
	for (grade = 0; grade < 5; grade++) {
		printf("The number of students for %s: ", gradeMap[grade]);
		int subject;
		for (subject = 0; subject < 4; subject++) {
			scanf("%d", &data[grade][subject]);
			if (data[minSubject[0]][minSubject[1]] >= data[grade][subject]) {
				minSubject[0] = grade;
				minSubject[1] = subject;
			}
		}
	}

	printf("            A       B       C       D       F   Total     Min\n");
	int subject;
	for (subject = 0; subject < 4; subject++) {
		printf("%5s   ", subjectMap[subject]);

		int total = 0;
		int gradeMin = 0;

		for (grade = 0; grade < 5; grade++) {
			totalExaminer[grade] += data[grade][subject];
			totalExaminer[5] += data[grade][subject];
			total += data[grade][subject];

			if (data[gradeMin][subject] >= data[grade][subject]) gradeMin = grade;
			if (data[grade][minExaminerSubject[grade]] >= data[grade][subject]) minExaminerSubject[grade] = subject;

			printf("%5d   ", data[grade][subject]);
		}

		printf("%5d   ", total);
		printf("%5s", gradeMap[gradeMin]);
		printf("\n");
	}

	printf("Total   ");
	int gradeMin = 0;
	for (grade = 0; grade < 5; grade++) {
		if (totalExaminer[gradeMin] >= totalExaminer[grade]) gradeMin = grade;
		printf("%5d   ", totalExaminer[grade]);
	}
	printf("%5d   ", totalExaminer[5]);
	printf("%5s", gradeMap[gradeMin]);
	printf("\n");


	printf("  Min   ");
	for (grade = 0; grade < 5; grade++) {
		printf("%5s   ", subjectMap[minExaminerSubject[grade]]);
	}
	printf("%5s       -", subjectMap[minSubject[1]]);

	return 0;
}
