#include<stdio.h> 

int main()
{
	int m, n, temp, i;
	printf("��J��Ӿ��:");
	scanf("%d %d", &m, &n);
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i > 0; i++)
		if (i%m == 0 && i%n == 0)
		{
			printf("%d�M%d���̤p�����Ƭ�:%d", m, n, i);
			break;
		}

	return 0;
}