#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> arr(n);
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 1;
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            cnt++;
            max = arr[i];
        }
    }

    cout << cnt;
}