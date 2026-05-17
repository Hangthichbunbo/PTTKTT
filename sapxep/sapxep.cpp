//sap xep chen
#include<bits/stdc++.h>
using namespace std;

//sap xep chen:
//dung 1 bien de luu chi so ptu min (index ban dau = 0 la ptu dau tien)
//duyet cac phan tu sau vi tri dang xet
//neu tim thay ptu nho hon thi min_index = vtri cua ptu min do
//doi cho phan tu dang xet voi ptu min vua tim dc
void selectionSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        //dung 1 bien de luu chi so cua phan tu nho nhat
        int min_pos = i;
        //duyet tat ca cac phan tu dung sau phan tu hien tai va cap nhat chi so cua phan tu nho nhat
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min_pos]) {
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
    }
}

//sap xet noi bot
//so sanh 2 phan tu canh nhau, neu a[j] > a[j+1] thi swap a[j], a[j + 1]
void bubbleSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n - i - 1; i++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

//sap xep chen
//lay ra ptu thu 2 trong mang goi la x (position = 1)
//so sanh voi cac ptu trc do, neu x > a[position - 1](ptu trc x) thi dich a[pos-1] sang phai
//lap lai cho den khi tim dc vtri dung thi chen x vao
void insertionSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        //lay ra phan tu o chi so i
        int x = a[i], pos = i - 1;
        while(pos >= 0 && x < a[pos]) {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}

int main() {
    int a[100], n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selectionSort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}