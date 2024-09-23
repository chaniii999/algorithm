#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp, s;
    cin >> temp >> s;
    queue<char> q;
    for (int i = 0; i < temp.length(); i++)
        q.push(temp[i]);
    for (int i = 0; i < s.length(); i++) {
        if (q.empty())
            break;
        if (q.front() == s[i])
            q.pop();
    }
    
    if (q.empty())
        cout << "YES";
    else 
        cout << "NO";
}