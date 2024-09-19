#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    int k;
    cin >> s1 >> s2 >> k;
    string  temp = s1+s2;
    int qq = stoi(s1) + stoi(s2) - k;
    int ans  = stoi(temp) -k;
    cout << qq << "\n";
    cout << ans;

}