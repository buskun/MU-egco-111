//
// Created by buskun0 on 02/10/2018.
//

#include <stdio.h>

int main() {
	int m1, n1, m2, n2;
	printf("Enter Fraction A (m/n): ");
	scanf("%d/%d", &m1, &n1);
	printf("Enter Fraction B (m/n): ");
	scanf("%d/%d", &m2, &n2);

	int i;
	for (i = 0; i < 4; i++) {
		int mAns = 0;
		int nAns = 0;
		switch (i) {
			case 0:
				mAns = m1 * n2 + m2 * n1;
				nAns = n1 * n2;
				break;
			case 1:
				mAns = m1 * n2 - m2 * n1;
				nAns = n1 * n2;
				break;
			case 2:
				mAns = m1 * m2;
				nAns = n1 * n2;
				break;
			case 3:
				mAns = m1 * n2;
				nAns = n1 * m2;
				break;
			default:;
		}

		int mTemp, nTemp;
		if (mAns < 0) { mTemp = -mAns; }
		else { mTemp = mAns; }
		if (nAns < 0) { nTemp = -nAns; }
		else { nTemp = nAns; }

		int lowerNumber;
		if (mTemp > nTemp) { lowerNumber = nTemp; }
		else { lowerNumber = mTemp; }

		int j;
		for (j = 2; j <= lowerNumber; j++) {
			if (mAns % j == 0 && nAns % j == 0) {
				mAns /= j;
				nAns /= j;
				j--;
			}
		}

		switch (i) {
			case 0:
				printf("A + B = ");
				break;
			case 1:
				printf("A - B = ");
				break;
			case 2:
				printf("A * B = ");
				break;
			case 3:
				printf("A / B = ");
				break;
			default:;
		}
		if (mAns != 0) { printf("%d/%d\n", mAns, nAns); }
		else { printf("0\n"); }
	}


	return 0;
}
