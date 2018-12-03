#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int length) {
	int i, j;
	for (i = 0; i < length; i++)
		for (j = i; j > 0; j--) {
			if (arr[j] >= arr[j - 1]) {
				break;
			}
			int tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
		}
}

void sc(char *txt, char ch, int i, char *txt2, int *a) {
	printf(txt, ch, i);
	scanf(txt2, *a);
}

void scan(int *arr, int *size, char ch) {
	sc("Input %c : Size = %c", ch, 0, "%d", size);
	int i;
	for (i = 0; i < *size; i++) sc("%c%d = ", ch, i, "%d", arr + i);
}

int main() {
	int size_a, size_b, i, arr_a[100], arr_b[100];
	scan(arr_a, &size_a, 'A');
	scan(arr_b, &size_b, 'B');
	printf("Before Sorting...\n A: ");
	for (i = 0; i < size_a; i++)
		printf("%d ", arr_a[i]);
	printf("\n  B: ");
	for (i = 0; i < size_b; i++)
		printf("%d ", arr_b[i]);
	sort(arr_a, size_a);
	sort(arr_b, size_b);
	printf("\nAfter Sorting...\n A: ");
	for (i = 0; i < size_a; i++)
		printf("%d ", arr_a[i]);
	printf("\n  B: ");
	for (i = 0; i < size_b; i++)
		printf("%d ", arr_b[i]);
	printf("\nMin A = %d\nMin B = %d", arr_a[0], arr_b[0]);
}
