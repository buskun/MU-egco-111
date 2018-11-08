//
// Created by buskun0 on 08/11/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int numberOfPlayer;
	printf("Number of players: ");
	scanf("%d", &numberOfPlayer);
	char **names = (char **) malloc(sizeof(char *) * numberOfPlayer);
	int *scores = (int *) malloc(sizeof(int) * numberOfPlayer);

	int highest[2] = { 0, 0 };

	int i;
	for (i = 0; i < numberOfPlayer; i++) {
		printf("Name %d: ", i + 1);
		char name[100];
		scanf(" %[^(\n)]", name);
		names[i] = (char *) malloc(sizeof(char) * (strlen(name) + 1));
		names[i] = strdup(name);
		printf("  Score %d: ", i + 1);
		int score;
		scanf("%d", &score);
		scores[i] = score;
		if (score > highest[1]) {
			highest[0] = i;
			highest[1] = score;
		}
	}

	printf("The highest score is %d (%s).", scores[highest[0]], names[highest[0]]);

	free(names);
	free(scores);
	return 0;
}
