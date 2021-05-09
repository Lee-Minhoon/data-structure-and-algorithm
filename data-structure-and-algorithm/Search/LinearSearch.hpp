#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

template <typename T>
int LinearSearch(T arr[], int len, T target)
{
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
}

#endif