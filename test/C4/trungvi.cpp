#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int L = *min_element(a.begin(), a.end());
    int R = *max_element(a.begin(), a.end());
    int k = (n + 1) / 2; // vị trí trung vị

    while (L < R) {
        int mid = (L + R) / 2;
        int cnt = 0;
        for (int x : a) if (x <= mid) cnt++;
        if (cnt >= k) R = mid;
        else L = mid + 1;
    }

    cout << "Trung vi la: " << L << endl;
    return 0;
}
