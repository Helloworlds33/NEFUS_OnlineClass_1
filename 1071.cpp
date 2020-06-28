#include<stdio.h>

void main() {
	int i = 0;

replay:
	scanf("%d", &i);
	printf("%d\n\n", i);
	if (i != 0) goto replay;

}