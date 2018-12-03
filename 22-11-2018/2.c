//
// Created by buskun0 on 22/11/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strToLower(const char *string) {
	char *result = (char *) malloc(sizeof(char) * 10);
	int i;
	for (i = 0; string[i] != '\0'; i++) {
		result[i] = (char) tolower(string[i]);
	}
	result[i] = '\0';
	return result;
}

int main() {
	typedef struct {
		char name[30];
		char gender[10];
		union {
			struct {
				int date;
				int month;
				int year;
			} date;
			int age;
		} birthDay;
	} person;

	int numberOfFreinds = 0;
	printf("Number of Friends = ");
	scanf("%d", &numberOfFreinds);

	person friends[10];

	int i;
	for (i = 0; i < numberOfFreinds; i++) {
		printf("%2d. Name-Surname : ", i + 1);
		scanf(" ");
		gets(friends[i].name);

		do {
			char gender[10];
			printf("      Gender (male/female) : ");
			scanf("%s", gender);
			strcpy(friends[i].gender, strToLower(gender));
		} while (strcmp(friends[i].gender, "male") != 0 && strcmp(friends[i].gender, "female") != 0);

		if (strcmp(friends[i].gender, "male") == 0) {
			printf("      Age : ");
			scanf("%d", &friends[i].birthDay.age);
		} else if (strcmp(friends[i].gender, "female") == 0) {
			printf("      Birthday (dd/mm/yyyy) : ");
			scanf("%d/%d/%d", &friends[i].birthDay.date.date, &friends[i].birthDay.date.month,
			      &friends[i].birthDay.date.year);
		}
	}

	printf("Male\n");
	int j;
	for (i = 0, j = 1; i < numberOfFreinds; i++) {
		if (strcmp(friends[i].gender, "male") != 0) continue;
		printf("%2d. %-30s %d\n", j, friends[i].name, friends[i].birthDay.age);
		j++;
	}

	int birthInMarch = 0;
	printf("Female\n");
	for (i = 0, j = 1; i < numberOfFreinds; i++) {
		if (strcmp(friends[i].gender, "female") != 0) continue;
		printf("%2d. %-30s %02d/%02d/%04d\n", j, friends[i].name, friends[i].birthDay.date.date,
		       friends[i].birthDay.date.month, friends[i].birthDay.date.year);
		j++;
		if (friends[i].birthDay.date.month == 3) birthInMarch++;
	}
	if (birthInMarch <= 1) {
		printf("--> There is %d woman that births in March", birthInMarch);
	} else {
		printf("--> There are %d women that birth in March", birthInMarch);
	}

	return 0;
}
