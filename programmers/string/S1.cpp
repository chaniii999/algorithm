#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    char c;
    cin >> temp >> c;
    int cnt = 0;
    transform(temp.begin(), temp.end(),temp.begin(),::tolower);
    c= tolower(c);
    for (size_t i = 0; i < temp.size(); i++) {
        if (temp[i] == c)
            cnt++;
    }
    cout << cnt;


}