#include<stdio.h>

void main() {
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);
}