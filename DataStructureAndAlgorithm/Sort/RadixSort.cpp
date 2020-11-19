#include "../header.h"
#include<iostream>
#include<queue>

using namespace std;

int FindMaxDigit(int pArray[], int len)
{
    int max = 0;
    int digit = 0;

    for (int i = 0; i < len; i++) {
        if (max < pArray[i]) {
            max = pArray[i];
        }
    }

    for (int i = max; i > 0; i /= 10) {
        digit++;
    }

    return digit;
}

void RadixSort(int pArray[], int len)
{
    queue<int> q[20];
    int digit = FindMaxDigit(pArray, len);
    int factor = 1;
    int num;

    asd();

    for (int i = 0; i < digit; i++) {
        int queueSize[20] = { 0, };

        for (int j = 0; j < len; j++) {
            if (pArray[j] > 0) {
                num = (pArray[j] / factor) % 10 + 10;
            }
            else {
                num = (pArray[j] / factor) % 10 + 9;
            }
            q[num].push(pArray[j]);
            queueSize[num]++;
        }

        factor *= 10;
        int j = 0;

        for (int k = 0; k < 20; k++) {
            for (int l = 0; l < queueSize[k]; l++) {
                pArray[j] = q[k].front();
                q[k].pop();
                j++;
            }
        }
    }
}