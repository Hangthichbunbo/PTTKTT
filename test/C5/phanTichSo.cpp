#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> phan;

void quaylui(int conlai, int truoc) {
    if (conlai == 0) {
        for (int i = 0; i < phan.size(); i++) {
            if (i > 0) cout << " + ";
            cout << phan[i];
        }
        cout << endl;
        return;
    }
    for (int k = truoc; k <= conlai; k++) {
        phan.push_back(k);
        quaylui(conlai - k, k);
        phan.pop_back();
    }
}

int main() {
    cin >> N;
    quaylui(N, 1);
    return 0;
}
