#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap so tien can rut (chia het cho 10.000): ";
    do {
        cin >> n;
        if(n < 10000 || n % 10000 != 0) {
            cout << "So tien phai >= 10.000 va chia het cho 10.000. Nhap lai: ";
        }
    } while(n < 10000 || n % 10000 != 0);

    int a[4] = {100000, 50000, 40000, 10000};
    int dem = 0;

    cout << "So to tien can rut: " << endl;
    for(int j = 0; j < 4; j++) {
        int soTo = n / a[j];
        if(soTo > 0) {
            cout << a[j] << " VND: " << soTo << " to" << endl;
        }
        n %= a[j];
        dem += soTo;
    }

    cout << "Tong so to: " << dem << endl;
    return 0;
}
