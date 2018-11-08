//
// Created by buskun0 on 08/11/2018.
//

#include <stdio.h>

int main() {
	int n;
	printf("Input n: ");
	scanf("%d", &n);

	int afibo[100];

	*afibo = 0;
	*(afibo + 1) = 1;

	int i;
	for (i = 0; i <= n; i++) {
		if (i == 0 || i == 1) continue;
		*(afibo + i) = *(afibo + i - 1) + *(afibo + i - 2);
	}

	int nOdd = 0;
	int nEven = 0;

	for (i--; i > 0; i--) {
		printf("%d ", *(afibo + i));
		if (*(afibo + i) % 2 == 0) { nEven++; }
		else { nOdd++; }
	}
	printf("\n");
	printf("#Even = %d\n#Odd = %d", nEven, nOdd);

	return 0;
}
