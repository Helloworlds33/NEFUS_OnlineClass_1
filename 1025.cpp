#include<stdio.h>

void main() {
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;

	scanf("%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5);

	printf("[%d]\n", n1 * 10000);
	printf("[%d]\n", n2 * 1000);
	printf("[%d]\n", n3 * 100);
	printf("[%d]\n", n4 * 10);
	printf("[%d]", n5);
}