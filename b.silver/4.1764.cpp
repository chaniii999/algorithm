#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> map;
    vector<string> v;
    for (int i = 0; i < n+m; i++) {
        string str;
        cin >> str;
        map[str]++;
    }
    for (auto it: map) {
        if (it.second == 2)
            v.push_back(it.first);
    }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";

    for (string s: v)
        cout << s << "\n";


}