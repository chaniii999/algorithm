#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int s = 0;
    int e = n-1;
    int ans = 0;
    sort(arr.begin(), arr.end());
    while (s < e) { // 투 포인터가 서로 만날때까지.
        int sum = arr[s] + arr[e];
        if (sum == m) {
            ans++;
            s++;
            e--;
        }
        if (sum < m)
            s++;
        if (sum > m)
            e--;
    }
    cout << ans;
}