#include<stdio.h>

	unsigned int invert(unsigned int x, int p, int n)
{
	return x ^ (~(~0<<n) << (p-n+1));
}

	int main()
{
	unsigned int x = 66;
	unsigned int y;
	int p = 6;
	int n = 3;
	y = invert(x, p, n);
	printf("%d\n",y);
	return 0;
}

