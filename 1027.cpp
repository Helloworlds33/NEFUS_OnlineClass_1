#include<stdio.h>

void main() {
	int yr = 0, mon = 0, dt = 0;

	scanf("%d.%d.%d", &yr, &mon, &dt);
	printf("%02d-%02d-%02d", dt, mon, yr);
}