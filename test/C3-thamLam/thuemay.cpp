#include <bits/stdc++.h>
using namespace std;

// Cấu trúc lưu thông tin khách hàng 
struct KhachHang {
    int id, a, b, c;
};

// Hàm so sánh để sắp xếp tiền thuê giảm dần 
bool soSanhTienThue(KhachHang x, KhachHang y) {
    return x.c > y.c;
}

int main() {
    int n = 5;
    // Dữ liệu mẫu dựa trên bảng bạn đã cung cấp
    vector<KhachHang> ds = {
        {1, 6, 7, 15},
        {2, 8, 10, 27},
        {3, 9, 12, 43},
        {4, 11, 18, 110},
        {5, 15, 21, 90}
    };

    // 1. Sắp xếp khách hàng theo tiền thuê giảm dần 
    sort(ds.begin(), ds.end(), soSanhTienThue);

    vector<KhachHang> ketQua;
    int tongTien = 0;

    // 2. Bắt đầu chọn khách hàng đầu tiên (tiền thuê lớn nhất)
    ketQua.push_back(ds[0]);
    tongTien += ds[0].c;

    // 3. Lặp qua các khách hàng còn lại 
    for (int i = 1; i < ds.size(); i++) {
        bool trungLich = false;
        
        // Kiểm tra xem khách i có giao thời gian với những khách đã chọn không 
        for (const auto& daChon : ketQua) {
            // Hai khoảng [a1, b1] và [a2, b2] giao nhau nếu (a1 < b2) và (a2 < b1)
            if (ds[i].a < daChon.b && daChon.a < ds[i].b) {
                trungLich = true;
                break;
            }
        }

        // Nếu không trùng thì chọn khách hàng này 
        if (!trungLich) {
            ketQua.push_back(ds[i]);
            tongTien += ds[i].c;
        }
    }

    cout << "Cac khach hang duoc chon: ";
    for (const auto& kh : ketQua) {
        cout << kh.id << " ";
    }
    cout << "\nTong so tien thu duoc: " << tongTien << endl;

    return 0;
}