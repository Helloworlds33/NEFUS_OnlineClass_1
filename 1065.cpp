#include<stdio.h>

void main() {
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);
	
	if (a % 2 == 0) printf("%3d", a);
	if (b % 2 == 0) printf("%3d", b);
	if (c % 2 == 0) printf("%3d", c);
}