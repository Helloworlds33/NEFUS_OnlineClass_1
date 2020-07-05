#include <stdio.h>

int n, m, inp_max = 0;

int max() {
	if (n > m) inp_max = n;
	else if (m > n) inp_max = m;

	return inp_max;
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%d\n", max());
}