#include "header.h"

void main(void)
{
	int a[5] = { 5, 1, 2, 3, 4 };
	int b[5] = { 10, 20, 30, -45, 555 };
	
	QuickSort(a, 0, 4);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
}