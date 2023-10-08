#include <stdio.h>
int main()
{
	int a, b, c, d, f;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &f);
	a || printf("o") && c;
	c && d || printf("x");
	(d || b) && f || printf("x");
	a + b == 1 && printf("x");
	f && printf("o");
	b && d || printf("o");
	b + d == 3 && printf("o");
		
}
