#include<stdio.h>

void main() {
	int i = 0, n = 0;

	scanf("%d", &n);

replay:
	scanf("%d", &i);
	printf("%d\n\n", i);
	if (n-- != 0) goto replay;

}