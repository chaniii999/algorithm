#include <bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        string temp = arr[i];
        reverse(temp.begin(), temp.end());
        
        int k = stoi(temp);
        if (k== 1 || k == 0)
            continue;
        int p = 2;
        bool flag = true;
        while (p <= sqrt(k)) {
            if (k%p == 0) {
                flag = false;
                break;
            }
            p++;
        }
        if (flag)
            cout << k << " ";
    }
}