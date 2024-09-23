#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int s = 0;
        int e = n - 1;

        while (s < e) {
            if (s == i) { s++; continue; } 
            if (e == i) { e--; continue; } // e는 끝에서부터 오니까 i 보다 내려가도 값을 구할 수 있음.
            int sum = arr[s] + arr[e];
            if (sum == num) {
                cnt++;
                break;
            }
            if (sum < num)
                s++;
            else
                e--;
        }
    }
    cout << cnt;
}