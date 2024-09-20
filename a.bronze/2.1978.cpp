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

    int ans = 0;
    for (int i: arr) {
        int k = 2;
        bool flag = true;
        if (i == 1 || i == 0)
            continue;

        while(k <= sqrt(i)) {
            if (i % k == 0) {
                flag = false;
                break;
            }
            k++;
        }
        if (flag)
            ans++;
    }
    cout << ans;
 
}