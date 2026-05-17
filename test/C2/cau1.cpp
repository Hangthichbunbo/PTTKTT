//Nhập vào số nguyên dương n > 1, kiểm tra n có là số nguyên tố không?
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, plag = 0;
    do{
        cout << "Nhap so nguyen duong > 1: ";
        cin >> n;
    }while(n <= 1);

    for(int i = 2; i < sqrt(n); i++) {
        if(n % i == 0) {
            plag = 1;
            break;
        }
    }

    if(plag == 0) {
        cout << "La so nguyen to";
    }
    else cout << "Khong phai so nguyen to";

    return 0;
}