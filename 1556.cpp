#include <stdio.h>

int n, i, fact = 1;

long long int f() {
	for (i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;

}

int main()
{
	scanf("%d", &n);
	printf("%lld\n", f());
}