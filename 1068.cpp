#include<stdio.h>

void main() {
	int a = 0;

	scanf("%d", &a);

	if (a >= 90) printf("A");
	else if (a >= 70 && a < 90) printf("B");
	else if (a >= 40 && a < 70) printf("C");
	else if (a < 70) printf("D");
}