#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int,string>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    stable_sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}