#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cout << "Nhap so thanh pho Alpha (M): ";
    cin >> M;
    cout << "Nhap so thanh pho Beta (N): ";
    cin >> N;

    // ma tran ket nghia: 1 neu ket nghia, 0 neu khong
    vector<vector<int>> relation(M+1, vector<int>(N+1, 0));
    cout << "Nhap ma tran ket nghia (M hang, N cot, 0/1):\n";
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> relation[i][j];
        }
    }

    vector<vector<int>> dp(M+1, vector<int>(N+1, 0));

    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            if (relation[i][j] == 1) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << "So cau nhieu nhat co the bac: " << dp[M][N] << endl;
    return 0;
}
