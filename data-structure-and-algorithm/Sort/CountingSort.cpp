#include<iostream>
#include<vector>

using namespace std;

int* countingSort(vector<int>& vec, int n)
{
    int cnt[10001] = { 0, };

    for (int i = 0; i < n; i++) {
        cnt[vec[i]]++;
    }

    for (int i = 0; i < 10000; i++) {
        cnt[i + 1] = cnt[i + 1] + cnt[i];
    }

    int* res = new int[n];

    for (int i = n - 1; i >= 0; i--) {
        int index = --cnt[vec[i]];
        res[index] = vec[i];
    }

    return res;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }


    int* res = countingSort(vec, n);

    for (int i = 0; i < n; i++) {
        cout << res[i] << "\n";
    }

    return 0;
}

