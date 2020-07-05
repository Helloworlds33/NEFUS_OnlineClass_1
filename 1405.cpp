#include<stdio.h>

int main() {
	int i, j, cnt = 0;
	int a[5] = {};

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int x = 0; x < 5; x++) {
		for (i = cnt; i < 5; i++) {
			printf("%d", a[i]);

			if (i == 4) {
				for (j = 0; j < cnt; j++) printf("%d", a[j]);
			}

			
		}
		printf("\n");
		cnt++;
	}

}