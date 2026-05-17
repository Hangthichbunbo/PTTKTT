// 2. Nhập vào số nguyên dương n tính tổng tất cả các ước nguyên dương của n. 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;

    do {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
    }
    while(n <= 0);
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    cout << "Tong cac uoc nguyen duong la: " << sum;

    return 0;
}