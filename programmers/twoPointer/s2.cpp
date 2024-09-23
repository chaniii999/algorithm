#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int p1 = 0;
    int p2 = 0;
    vector<int> ans;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (p1 < n || p2 < m) {
        if (a[p1] == b[p2]) {
            ans.push_back(a[p1]);
            p1++;
            p2++;
            continue;
        }
        if (a[p1] < b[p2])
            p1++;
        else
            p2++;
    }
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i];
}

// 1 2 3 5 9
// 2 3 5 7 8