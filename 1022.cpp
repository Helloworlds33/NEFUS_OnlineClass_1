#include<stdio.h>

void main() {
	char a[2001];

	fgets(a, 2000, stdin);
	printf("%s", a);
}