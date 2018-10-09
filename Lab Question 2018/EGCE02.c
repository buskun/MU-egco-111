//
// Created by buskun0 on 09/10/2018.
//

#include <stdio.h>

int main() {
	int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char nameOfDay[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int firstDayOfYear = 1;

	int day, month;
	do {
		printf("Input (day/month): ");
		scanf("%d/%d", &day, &month);
		if (day <= 0 || month <= 0 || month > 12) {
			printf("Don't have this day.\n");
			continue;
		}
		if (day > daysOfMonth[month - 1]) {
			printf("Don't have this day.\n");
			continue;
		}

		int sum = firstDayOfYear;

		int i;
		for (i = 0; i < month - 1; i++) sum += daysOfMonth[i];

		sum += day - 1;
		sum %= 7;
		printf("%d/%d/2018 is %s", day, month, nameOfDay[sum]);
		break;
	} while (1);
	return 0;
}
