#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char word;
	printf("��J�@�Ӧr��:");
	scanf("%c", &word);

	if (word >= 'A'&&word <= 'Z')
	{
		word += 32;
		printf("change to %c\n", word);
	}
	else if (word >= 'a'&&word <= 'z')
	{
		word -= 32;
		printf("change to %c\n", word);
	}

	system("pause");
	return 0;
}

