#include "../header.h"

bool BinarySearch(int pArray[], int len, int findNum)
{
    int start = 0;
    int end = len - 1;
    int mid = (start + end) / 2;

    while (end - start >= 0) {
        if (findNum == pArray[mid]) {
            return true;
        }
        else if (findNum < pArray[mid]) {
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }

    return false;
}