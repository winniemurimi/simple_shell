include < stdio.h >

/**
 * add numbers in an arry
 * ptr is a pointer
 * @add initiliase to 0
 * print the sum of the array
 * return 0
 * print the sum of the array
 * void does not return anything
 * return 0
 */

int main void()
{
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *ptr = nums;
	int add = 0;

	while (*ptr < 10)
	{
		add += *ptr;
		ptr++;
	}

	printf("Sum of numbers less than 10: %d\n", sum);

	return (0);
}
