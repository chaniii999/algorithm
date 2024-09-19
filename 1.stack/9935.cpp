//문자열 폭발

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string total,boom;
    cin >> total;
    cin >> boom;
    string ans= "";

    while (total.find(boom) != string::npos) {
        total.erase(total.find(boom),boom.size());
    }
    if (total.empty()) {
        cout << "FRULA";
        return 0;
    }
    cout << total;
    









}