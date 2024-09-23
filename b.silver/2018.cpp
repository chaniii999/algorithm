#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int cnt = 0;

    // i는 연속된 자연수의 개수

    for (int i = 1; i * (i - 1) / 2 < n; i++) {
        if ((n - i * (i - 1) / 2) % i == 0)
            cnt++;
    }
    cout << cnt;
}
