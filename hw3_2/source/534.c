#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main(void)
{
	int a, b, ans;
	printf("��J��Ӿ��:");
	scanf("%d %d", &a, &b);

	ans = power(a, b);

	printf("%d��%d���謰:%d", a, b, ans);

	return 0;
}

int power(int a, int b)
{
	if (b != 0)
		return (a*power(a, b - 1));
	else
		return 1;
}