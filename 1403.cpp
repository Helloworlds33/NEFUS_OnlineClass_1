#include<stdio.h>

int main() {
	int i, k;
	int a[1000] = {};

	scanf("%d", &k);

	for (i = 0; i < k; i++)
	{
		scanf("%d", &a[i]);

	}
	for (int j = 0; j < 2; j++) {
		for (i = 0; i < k; i++)
		{
			printf("%d\n", a[i]);
		}
	}
	
}