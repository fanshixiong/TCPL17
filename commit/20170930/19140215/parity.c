#include <stdio.h>

int main()
{
	int n = 10;
	int flag = n & 1;
	// or
	/*
	int flag = n % 2 ? 1 : 0;
		*/
	printf("%d\n", flag);
	return 0;
}
