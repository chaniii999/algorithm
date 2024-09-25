#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int num = 11;
    vector<int> dp(num+1,0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= num; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;
        cout << dp[k] << "\n";
    }


}