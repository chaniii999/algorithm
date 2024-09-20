#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, idx; // n = 문서 개수 , idx : 찾고자하는 문서 번호
        cin >> n >> idx;
        queue<int> q; // 문서의 중요도 순서
        int mx = 10;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            q.push(temp);
            mx = max(mx, temp);
        }
        int cnt = 0;
        while (idx != 0) {
            if (q.front()) {
        }


        









    }

}