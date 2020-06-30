#include <stdio.h>

int main() {
	int n = 0, x = 0, i, j;

	printf("역삼각형 높이 입력: ");
	scanf("%d", &n);
	x = n;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++)
			printf("%d", x);
		printf("\n");
		x--;
	}

	return 0;
}
