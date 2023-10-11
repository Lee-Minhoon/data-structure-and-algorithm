#ifndef SORTS_H
#define SORTS_H

#include "../header.h"

//==================================================
// ���� ����(Selection Sort) ===== n^2
// ���� ����(Insertion Sort) ===== n^2
// ���� ����(Bubble Sort) ======== n^2
// �պ� ����(Merge Sort) ========= n log n
// ��� ����(Radix Sort) ========= n
// ��� ����(Counting Sort) ====== n
//==================================================

// ���� ����(Selection Sort)
template <typename T>
void selectionSort(T arr[], int len)
{
    for (int i = 0; i < len; i++) {
        int temp = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[temp] >= arr[j]) {
                temp = j;
            }
        }
        swap(arr, i, temp);
    }
}

// ���� ����(Insertion Sort)
template <typename T>
void insertionSort(T arr[], int len)
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

// ���� ����(Bubble Sort)
template <typename T>
void bubbleSort(T arr[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 1; j < len - i; j++) {
            if (arr[j] < arr[j - 1]) {
                swap(arr, j, j - 1);
            }
        }
    }
}

// �պ� ����(Merge Sort)
template <typename T>
void merge(T arr[], int start, int end, int mid)
{
    const int SIZE = end - start + 1;
    T* temp = new T[SIZE];
    int i = start, j = mid + 1, idx = 0;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[idx] = arr[i++];
            idx++;
        }
        else if (arr[j] < arr[i]) {
            temp[idx] = arr[j++];
            idx++;
        }
    }

    while (i <= mid) {
        temp[idx] = arr[i++];
        idx++;
    }
    while (j <= end) {
        temp[idx] = arr[j++];
        idx++;
    }

    idx = 0;
    for (int k = start; k <= end; k++) {
        arr[k] = temp[idx++];
    }

}

template <typename T>
void mergeSort(T arr[], int start, int end)
{
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, end, mid);
    }
}

// �� ����(Quick Sort)
template <typename T>
void quickSort(T arr[], int start, int end)
{
    if (end <= start) return;

    T pivot = arr[start];
    int i = start, j = end;
    while (i < j) {
        while (pivot >= arr[i] && i < end) {
            i++;
        }
        while (pivot <= arr[j] && j > start) {
            j--;
        }
        if (i < j) {
            swap(arr, i, j);
        }
    }
    swap(arr, start, j);

    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
}

// ��� ����(Radix Sort)
int getMaxDigit(int arr[], int len)
{
    int temp = 0;
    int digit = 0;

    for (int i = 0; i < len; i++) {
        if (temp < arr[i]) {
            temp = arr[i];
        }
    }

    for (int i = temp; i > 0; i /= 10) {
        digit++;
    }

    return digit;
}

void radixSort(int arr[], int len)
{
    queue<int> q[20];
    int maxDigit = getMaxDigit(arr, len);
    int factor = 1;

    for (int i = 0; i < maxDigit; i++) {
        for (int j = 0; j < len; j++) {
            int idx = (arr[j] / factor) % 10 + getSign(arr[j]) + 9;
            q[idx].push(arr[j]);
        }

        int idx = 0;
        for (int j = 0; j < 20; j++) {
            while (!q[j].empty()) {
                arr[idx++] = q[j].front();
                q[j].pop();
            }
        }

        factor *= 10;
    }
}

// ��� ����(Counting Sort)
void countingSort(int arr[], int len)
{
    int maxValue = getMaxValue(arr, len);
    int minValue = getMinValue(arr, len);
    int size = maxValue + (!getSign(minValue) ? abs(minValue) + 1 : 1);
    int* temp = new int[size];

    for (int i = 0; i < size; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < len; i++) {
        temp[arr[i] + abs(minValue)]++;
    }

    int idx = 0;
    for (int i = 0; i < size; i++) {
        while (temp[i]) {
            arr[idx++] = i - abs(minValue);
            temp[i]--;
        }
    }
}

#endif