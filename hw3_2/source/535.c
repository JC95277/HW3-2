#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, t1 = 0, t2 = 1, nextTerm = 0;

	printf("輸入n位:");
	scanf("%d", &n);

	printf("陣列為:");

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

	printf("\n最大數字為:%d", nextTerm);
	return 0;
}