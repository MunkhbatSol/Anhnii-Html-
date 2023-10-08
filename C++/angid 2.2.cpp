#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = (a > b) * a + (a <= b) *b;
	printf("%d\n", c);
}
