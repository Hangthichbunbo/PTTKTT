#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int l, int m, int r) {
    vector<int> x(a.begin() + l, a.begin() + m + 1);
    vector<int> y(a.begin() + m + 1, a.begin() + r + 1);

    int i = 0, j = 0, k = l;
    while (i < x.size() && j < y.size()) {
        if (x[i] <= y[j]) {
            a[k++] = x[i++];
        } else {
            a[k++] = y[j++];
        }
    }
    while (i < x.size()) {
        a[k++] = x[i++];
    }
    while (j < y.size()) {
        a[k++] = y[j++];
    }
}

void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
    }

    mergeSort(a, 0, n - 1);

    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
