#include<stdio.h>

int main() {
	int n, i, t;
	int a[23] = {};

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);

	}

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);

	}
}