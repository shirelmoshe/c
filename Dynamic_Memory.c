#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#pragma warning(disable:4996)
int* original;

int printNum(int* numberList)
{
	int* ptr;
	int sum = 0;
	ptr = numberList;
	for (int i = 0; i < 5; i++)
	{
		sum += *ptr;
		ptr++;
	}
	printf("%d", sum);

}

int* alloc5Numbers(int num1, int num2, int num3, int num4, int num5)
{

	ptr = malloc(5 * sizeof(int));
	original = ptr;

	if (ptr == NULL)
	{
		// no memory alocation
		// error message
	}
	else
	{
		*ptr = num1;
		ptr++;

		*ptr = num2;
		ptr++;

		*ptr = num3;
		ptr++;

		*ptr = num4;
		ptr++;

		*ptr = num5;

	}
	return original;

}

int main()
{
	int number;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &number);
		int* num = (int*)malloc(sizeof(int));
		printf("%d\n", number);

	}
	int* address;
	address = alloc5Numbers(1, 2, 3, 4, 5);
	printNum(address);
	free(original);






	return 0;
}
    









