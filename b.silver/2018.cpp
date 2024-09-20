#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    int start = 0;
    int end = 0;
    int count = 0;
    int sum = 1;

    while (end < n) {
        if (sum == n) {
            count++;
            end++;
            if (end < n) sum += arr[end];
        } else if (sum < n) {

            sum -= arr[start];
            start++;
        } else {
            end++;
            sum += arr[end];
        }
    }
    cout << count;
}