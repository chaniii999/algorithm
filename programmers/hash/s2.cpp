#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string c1,c2;
    cin >> c1 >> c2;
    sort(c1.begin(), c1.end());
    sort(c2.begin(), c2.end());
    if (c1 == c2) cout << "YES";
    else cout << "NO";
    return 0;

}