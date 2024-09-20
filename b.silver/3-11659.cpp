#include <bits/stdc++.h>
using namespace std;

int n,m;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> dp(n+1);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        dp[i+1] = sum;
    }
    while (m--) {
        int a,b;
        cin >> a >> b;
        cout << dp[b] - dp[a-1] << "\n";
    }
}