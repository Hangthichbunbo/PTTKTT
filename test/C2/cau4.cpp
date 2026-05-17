#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos = 0, neg = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (y > 0) pos++;   // điểm nằm trên trục hoành
        else if (y < 0) neg++; // điểm nằm dưới trục hoành
        // nếu y == 0 thì bỏ qua, vì không tạo đoạn cắt đúng một lần
    }

    long long result = 1LL * pos * neg;
    cout << result << endl;
    return 0;
}
