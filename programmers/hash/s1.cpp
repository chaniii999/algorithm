#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<char, int> map;

    for (int i = 0; i < n; i++) {
        char c = str[i];
        map[c]++;
    }
    string winner;
    int mx = 0;
    for (const auto &pair: map) {
        if (pair.second > mx) {
            mx = pair.second;
            winner = pair.first;
        }
    }
    cout << winner << '\n';
    return 0;


}