#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cout << "Nhap so loai tien xu: ";
    cin >> N;
    vector<int> A(N);
    cout << "Nhap cac menh gia: ";
    for (int i = 0; i < N; i++) cin >> A[i];
    cout << "Nhap so tien M: ";
    cin >> M;

    const int INF = 1e9;
    vector<int> dp(M+1, INF), trace(M+1, -1);

    dp[0] = 0;
    for (int x = 1; x <= M; x++) {
        for (int i = 0; i < N; i++) {
            if (A[i] <= x && dp[x - A[i]] + 1 < dp[x]) {
                dp[x] = dp[x - A[i]] + 1;
                trace[x] = A[i];
            }
        }
    }

    if (dp[M] == INF) {
        cout << "Khong the doi tien voi cac menh gia da cho.\n";
    } else {
        cout << "Tong so xu it nhat: " << dp[M] << endl;
        cout << "Cach doi tien: ";
        int x = M;
        while (x > 0) {
            cout << trace[x] << " ";
            x -= trace[x];
        }
        cout << endl;
    }

    return 0;
}
