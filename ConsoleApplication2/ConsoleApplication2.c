#include <stdio.h>
#include <windows.h>

int main(void)
{
	int x = 30, y = 50;
	int tmp;

	printf("x = %d, y = %d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x = %d, y = %d\n", x, y);

	Sleep(30000);

	return 0;
}