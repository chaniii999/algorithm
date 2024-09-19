#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    cin >> temp;
    string ans ="";

    for (int i=0; i< temp.size(); i++) {
        if (ans.find(temp[i]) == string::npos)
            ans += temp[i];
    }
    cout << ans;
}