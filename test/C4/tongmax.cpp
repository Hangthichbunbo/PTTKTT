#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua day: "; cin >> n;
    int a[n];
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum1 = 0, sumMax = LLONG_MIN;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < n; i++) {
        sum1 += a[i];
        if (sum1 > sumMax) {
            sumMax = sum1;
            start = tempStart;
            end = i;
        }
        if (sum1 < 0) {
            sum1 = 0;
            tempStart = i + 1; // bắt đầu đoạn mới
        }
    }
    //a0, a1, ... aj
    cout << "Tong lon nhat la: " << sumMax << endl;
    cout << "Doan con toi uu: tu i = " << start << " den j = " << end << endl;

    return 0;
}
