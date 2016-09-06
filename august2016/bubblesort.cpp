// BubbleSort

#include <stdio.h>

// Declaration of Functions
void bubble_sort(long[], const long);

// Test Driver
int main()
{
	long array[100], n;
	printf("Enter number of elements up to 100\n");
	//scanf_s("%ld", &n);
	scanf("%ld", &n);
	printf("Enter %ld integers\n", n);

	for (long c = 0; c < n; c++)
		//scanf_s("%ld", &array[c]);
		scanf("%ld", &array[c]);

	bubble_sort(array, n);

	printf("Sorted list in ascending order:\n");
	for (long c = 0; c < n; c++)
		printf("%ld\n", array[c]);
	return 0;
}

void bubble_sort(long list[], const long n)
{
	long c = 0;
	long d = 0;

	for (c = 0; c < (n-1); c++)
		{
			// remove semicolon
			for (d = 0; d < (n - c - 1); d++)
			{
				if (list[d] > list[d+1])
					{
						/* Swapping */

						const long t = list[d];
						list[d] = list[d+1];
						list[d+1] = t;
					}
			}
		}
}
