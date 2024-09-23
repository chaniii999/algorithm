#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    cin >> temp;
    stack<char> s;
    s.push(temp[0]);
    for (int i = 1; i < temp.size(); i++) {
        if (temp[i] == '(')
            s.push(temp[i]);
        else if (!s.empty() && temp[i] == ')' && s.top() == '(')
            s.pop();
    }
    if (s.empty())
        cout << "YES";
    else
        cout << "NO";
}