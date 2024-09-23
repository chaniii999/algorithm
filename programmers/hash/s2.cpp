#include <bits/stdc++.h>
using namespace std;

string c1,c2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> c1 >> c2;

    unordered_map<char, int> m1, m2;
    for (int i = 0; i < c1.size(); i++) {
        m1[c1[i]]++;
        m2[c2[i]]++;
    }
    for (auto &p : m1) {
        if (m2[p.first]!= p.second) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    // sort(c1.begin(), c1.end());
    // sort(c2.begin(), c2.end());
    // if (c1 == c2) cout << "YES";
    // else cout << "NO";
}