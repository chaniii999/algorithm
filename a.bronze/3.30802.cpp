#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int arr[6];
    int t,p;
    cin >> n;
    for(int i=0; i < 6; i++) {
        cin >> arr[i];
    }
    cin >> t >> p;

    int ans = 0;
    for(int cnt:arr) {
        int k = (cnt + t - 1) / t;
        ans += k;
    }

    int ans2 = n / p;
    int ans3 = n % p;
    cout << ans << "\n";
    cout << ans2 << " " << ans3 << "\n";
    return 0;
 
}