#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

template <typename T>
void InsertionSort(T arr[], int len)
{
    for (int i = 1; i < len; i++) {
        T value = arr[i];
        int temp = i - 1;
        while (value < arr[temp] && temp >= 0) {
            arr[temp + 1] = arr[temp];
            temp--;
        }
        arr[temp + 1] = value;
    }
}

#endif