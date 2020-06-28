#include<stdio.h>

void main() {
	char alpha;
	int al = 65;

	scanf("%c", &alpha);

	do
	{
		printf("%2c", al);
		al++;
	} while (al <= (int)alpha);
}