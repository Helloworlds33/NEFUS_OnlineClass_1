#include <stdio.h>

int main() {
	int i, j, k, a;

	scanf("%d", &a);

	for (i = 0; i < a; i++) {
		for (j = i; j < a; j++) {
			printf(" ");
		}

		for (k = 0; k <= i * 2; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}