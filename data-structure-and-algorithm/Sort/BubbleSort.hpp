#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template <typename T>
void BubbleSort(T arr[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 1; j < len - i; j++) {
            if (arr[j] < arr[j - 1]) {
                T value = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = value;
            }
        }
    }
}

#endif