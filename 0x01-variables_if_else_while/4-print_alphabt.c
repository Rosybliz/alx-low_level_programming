#include <stdio.h>

int main()
{
	char x = 'a';

	while(x <= 'z')
	{
		if(x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
