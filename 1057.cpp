#include<stdio.h>

void main() {
	int a = 0, b = 0;

	scanf("%d %d", &a, &b);
	printf("%d", (a && b) || (!a && !b));
}