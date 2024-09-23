#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int p1 = 0;
    int p2 = 0;
    vector<int> ans;
    while (p1 < n || p2 < m) {
        if (p1 == n) { // p1이 이미 끝난 경우 p2++
            ans.push_back(b[p2++]);
            continue;
        }
        if (p2 == m) {
            ans.push_back(a[p1++]);
            continue;
        }
        if (a[p1] < b[p2])
            ans.push_back(a[p1++]);
        else
            ans.push_back(b[p2++]);
    }
    for (int k:ans)
        cout << k << " ";
 
}