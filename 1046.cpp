#include<stdio.h>

void main() {
	double i1 = 0, i2 = 0, i3 = 0, sum = 0;

	scanf("%lf %lf %lf", &i1, &i2, &i3);

	sum = i1 + i2 + i3;

	printf("%lf\n", sum);
	printf("%.2lf\n", (float)sum / 3);
}