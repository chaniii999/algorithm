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
    double mid = (arr.size() *0.3 + 0.5) / 2;
    int k =static_cast<int>(mid);
    if (k < 1) {
        k = 0;
    }
    int ans = 0;
    for (int i = k; i < arr.size() - k; i++)
        ans += arr[i];
    
    ans = ans / ( arr.size() - 2 *k);
    cout << ans;
}