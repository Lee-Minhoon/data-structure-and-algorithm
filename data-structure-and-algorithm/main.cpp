#include "header.h"

int main(void)
{
	int arr[7][9] = {
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 },
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 },
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 },
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 },
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 },
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 },
		{ 5, 1, 2, 3, -4, 100, 55, -3, -8 }
	};
	
	selectionSort(arr[0], 9);
	insertionSort(arr[1], 9);
	bubbleSort(arr[2], 9);
	mergeSort(arr[3], 0, 8);
	quickSort(arr[4], 0, 8);
	radixSort(arr[5], 9);
	countingSort(arr[6], 9);

	for (int i = 0; i < 7; i++)
	{
		for (auto j : arr[i]) {
			cout << j << ' ';
		}
		cout << '\n';
	}

	return 0;
}