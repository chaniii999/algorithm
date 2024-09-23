#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start = 0;
    int sum = 0;
    int mx = 0;
    while (start + k - 1< n) {
        sum = accumulate(arr.begin() + start, arr.begin() + start + k, 0);
        mx = max(mx, sum);
        start++;
    }
    cout << mx;
}