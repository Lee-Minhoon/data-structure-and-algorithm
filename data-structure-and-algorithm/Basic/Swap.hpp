#ifndef SWAP_H
#define SWAP_H

template <typename T>
void Swap(T arr[], int a, int b)
{
    T temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

#endif