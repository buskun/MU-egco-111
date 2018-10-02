//
// Created by buskun0 on 02/10/2018.
//

#include <stdio.h>

int main() {
	char dateMap[5][4] = { "Mon", "Tue", "Wed", "Thu", "Fri" };
	char lineMap[4][4] = { "516", "515", "124", "125" };
	int data[5][4] = { };
	int totalPassenger[6] = { 0, 0, 0, 0, 0, 0 };
	int maxPassengerLine[5] = { 0, 0, 0, 0, 0 };
	int maxLine[2] = { 0, 0 };

	int date;
	for (date = 0; date < 5; date++) {
		printf("The number of passengers for %s: ", dateMap[date]);
		int line;
		for (line = 0; line < 4; line++) {
			scanf("%d", &data[date][line]);
			if (data[maxLine[0]][maxLine[1]] <= data[date][line]) {
				maxLine[0] = date;
				maxLine[1] = line;
			}
		}
	}

	printf("        Mon   Tue   Wed   Thu   Fri   Total   Max\n");
	int line;
	for (line = 0; line < 4; line++) {
		printf("%5s   ", lineMap[line]);

		int total = 0;
		int dayMax = 0;

		for (date = 0; date < 5; date++) {
			totalPassenger[date] += data[date][line];
			totalPassenger[5] += data[date][line];
			total += data[date][line];

			if (data[dayMax][line] <= data[date][line]) dayMax = date;
			if (data[date][maxPassengerLine[date]] <= data[date][line]) maxPassengerLine[date] = line;

			printf("%3d   ", data[date][line]);
		}

		printf("%5d   ", total);
		printf("%3s", dateMap[dayMax]);
		printf("\n");
	}

	printf("Total   ");
	int dayMax = 0;
	for (date = 0; date < 5; date++) {
		if (totalPassenger[dayMax] <= totalPassenger[date]) dayMax = date;
		printf("%3d   ", totalPassenger[date]);
	}
	printf("%5d   ", totalPassenger[5]);
	printf("%3s", dateMap[dayMax]);
	printf("\n");


	printf("  Max   ");
	for (date = 0; date < 5; date++) {
		printf("%3s   ", lineMap[maxPassengerLine[date]]);
	}
	printf("%5s    -", lineMap[maxLine[1]]);

	return 0;
}
