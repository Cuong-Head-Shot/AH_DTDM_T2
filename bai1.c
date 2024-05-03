#include <stdio.h>

int main() 
{
	printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
	for (int i = 10; i < 100; i++) 
	{
		if (i % 7 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

