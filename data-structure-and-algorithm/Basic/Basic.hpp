#ifndef BASIC_H
#define BASIC_H

template <typename T>
void swap(T arr[], const int& a, const int& b)
{
    T temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

template <typename T>
bool getSign(T num)
{
    if (num > 0) {
        return true;
    }
    else {
        return false;
    }
}

template <typename T>
T getMaxValue(T arr[], const int& len)
{
    T temp = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }

    return temp;
}

template <typename T>
T getMinValue(T arr[], const int& len)
{
    T temp = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] < temp) {
            temp = arr[i];
        }
    }

    return temp;
}

#endif