#include<stdio.h>

void main() {
	int i1 = 0, i2 = 0;

	scanf("%d %d", &i1, &i2);

	printf("%d\n", i1 + i2);
	printf("%d\n", i1 - i2);
	printf("%d\n", i1 * i2);
	printf("%d\n", i1 / i2);
	printf("%d\n", i1 % i2);
	printf("%.2lf", (float)i1 / i2);
}