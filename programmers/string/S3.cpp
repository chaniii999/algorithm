#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp;
    cin >> temp;

    string alp = "";
    string ans = "";

    vector<char> v(temp.size());

    for (int i = 0; i < temp.size(); i++) {
        if(!isalpha(temp[i]))
            v[i] = temp[i];
        else
            alp = temp[i] + alp;
    }

    int idx = 0;

    for (char c:v) {
        if (c == '\0')
            c = alp[idx++];
        ans += c;
    }

    cout << ans;
}