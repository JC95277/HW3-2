#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, t1 = 0, t2 = 1, nextTerm = 0;

	printf("��Jn��:");
	scanf("%d", &n);

	printf("�}�C��:");

	for (int i = 1; i <= n; ++i) {
		if (i == 1) {
			printf("%d ", t1);
			continue;
		}
		if (i == 2) {
			printf("%d ", t2);
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		printf("%d ", nextTerm);
	}

	printf("\n�̤j�Ʀr��:%d", nextTerm);
	return 0;
}