#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE];

	for(i = 0; i < SIZE; i++)
		b[i] = a[i];	

	return 0;
}
