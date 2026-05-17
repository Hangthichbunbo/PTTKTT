#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, B;
    cin >> n >> B;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Sắp xếp giảm dần
    sort(a.rbegin(), a.rend());

    vector<int> bins; // dung lượng còn lại của các thùng

    for (int x : a) {
        bool placed = false;
        for (int &space : bins) {
            if (space >= x) {
                space -= x;
                placed = true;
                break;
            }
        }
        if (!placed) {
            bins.push_back(B - x);
        }
    }

    cout << "So thung it nhat: " << bins.size() << endl;
    return 0;
}
