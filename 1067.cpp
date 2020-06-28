#include<stdio.h>

void main() {
	int a = 0;

	scanf("%d", &a);

	if (a > 0) printf("plus\n");
	else if (a == 0) printf("zero\n");
	else printf("minus\n");

	if (a % 2 == 0) printf("even");
	else printf("odd");
}