#include <stdio.h>

int main() {
	const int l;
	printf("Enter length of array: ");
	scanf("%d", &l);
	printf("\n");
	int i, j, a[l];
	printf("Enter elements of array:\n");
	for (i = 0; i < l; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < l; i++) {
		for (j = 0; j < l - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			};
		};
	};
	for (i = 0; i < l; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
