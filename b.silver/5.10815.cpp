#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n;
    vector<int> arr(n);
    set<int> s; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;
        if (s.find(p) == s.end())
            cout << 0 << " ";
        else
            cout << 1 << " ";
    }
    
}