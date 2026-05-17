#include <bits/stdc++.h>
using namespace std;

// Hàm phân hoạch (partition)
int partition(int a[], int low, int high) {
    int pivot = a[high]; // chọn phần tử cuối làm pivot
    int i = low - 1;     // chỉ số của phần tử nhỏ hơn pivot

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1; // vị trí pivot sau khi phân hoạch
}

// Hàm QuickSort
void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high); // chỉ số pivot
        quickSort(a, low, pi - 1);        // sắp xếp nửa trái
        quickSort(a, pi + 1, high);       // sắp xếp nửa phải
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int a[100000]; // giả sử n ≤ 100000
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Day sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
