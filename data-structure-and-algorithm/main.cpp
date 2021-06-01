#include "header.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void main(void)
{
	int a[5] = { 10, 20, 30, -45, 555 };
	int b[5] = { 10, 20, 30, -45, 555 };
	
	BubbleSort(a, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << BinarySearch(a, 5, b[i]) << endl;
	}
}