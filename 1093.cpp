#include<stdio.h>

int main() {
	int n, i, t, cnt = 0;
	int a[24] = {};

	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}

	for (i = 0; i <= 23; i++)
	{
		printf("%d ", a[i]);

		if (a[i] == a[i + 1]) cnt++;

	}
}