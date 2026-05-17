#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double s1 = 0, s2 = 0, s3 = 0;
    const double E  = 2.718281828459045;

    do {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    // a. S1 = 1/n + 2/(n-1) + ... + n/1
    for (int i = 1; i <= n; i++) {
        s1 += (double)i / (n - i + 1);
    }
    cout << fixed << setprecision(2);
    cout << "S1 = " << s1 << endl;

    // b. S2 = sqrt(n + sqrt(n-1 + ... + sqrt(1)))
    s2 = 0;
    for (int i = 1; i <= n; i++) {
        s2 = sqrt(i + s2);
    }
    cout << "S2 = " << s2 << endl;

    // c. S3 = e + 1/1! - 1/2! + ... + (-1)^(n+1) * 1/n!
    double giaithua = 1;
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
        s3 += pow(-1, i + 1) * (1.0 / giaithua);
    }
    cout << "S3 = " << s3 + E << endl;

    return 0;
}
