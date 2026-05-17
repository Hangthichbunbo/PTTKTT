#include <bits/stdc++.h>
using namespace std;

struct Meeting {
    int start, finish;
};

bool cmp(Meeting a, Meeting b) {
    return a.finish < b.finish;
}

int main() {
    vector<Meeting> meetings = {
        {6,7}, {7,9}, {8,10}, {10,12}, {9,11}
    };

    sort(meetings.begin(), meetings.end(), cmp);

    cout << "Danh sach cac cuoc hop duoc chon:\n";
    int count = 0;
    int lastFinish = -1;
    for(auto m : meetings) {
        if(m.start >= lastFinish) {
            cout << "Cuoc hop: " << m.start << " - " << m.finish << endl;
            lastFinish = m.finish;
            count++;
        }
    }
    cout << "Tong so cuoc hop toi da: " << count << endl;
    return 0;
}
