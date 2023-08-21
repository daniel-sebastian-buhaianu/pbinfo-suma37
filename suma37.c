#include <stdio.h>

int main()
{
	char c; unsigned s = 0;

	while(scanf("%c", &c) != EOF && c >= '0' && c <= '9') {
		if (c >= '3' && c <= '7') s += (c - '0');
	}

	printf("%u", s);

	return 0;
}
