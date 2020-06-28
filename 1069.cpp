#include<stdio.h>

void main() {
	char a = 0;

	scanf("%c", &a);

	if (a == 'A') printf("best!!");
	else if (a == 'B') printf("good!!");
	else if (a == 'C') printf("run!");
	else if (a == 'D') printf("slowly~");
	else printf("what?");
}