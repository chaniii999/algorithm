#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    cin >> temp;
    string copy = "";
    for (char &c : temp) {

    }
    string copy = temp;
    reverse(copy.begin(), copy.end());
    if (temp == copy) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}