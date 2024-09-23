#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[10001];
    int n;
    fill(arr, arr + 10001, 0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr[k]++;
    }
    for (int i = 1; i <= 10000; i++) {
        while (arr[i]--)
            cout << i << "\n";
    }

}