#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> dau; // luu dau +1 hoac -1

void quaylui(int pos) {
    if (pos == N) {
        int tong = 0;
        for (int i = 1; i <= N; i++) {
            tong += dau[i-1] * i;
        }
        if (tong == 0) {
            for (int i = 1; i <= N; i++) {
                if (dau[i-1] == 1) cout << "+";
                else cout << "-";
                cout << i;
            }
            cout << " = 0\n";
        }
        return;
    }
    dau[pos-1] = 1;  // dau +
    quaylui(pos+1);
    dau[pos-1] = -1; // dau -
    quaylui(pos+1);
}

int main() {
    cin >> N;
    dau.resize(N);
    quaylui(1);
    return 0;
}
