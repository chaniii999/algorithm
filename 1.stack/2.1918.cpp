#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    cin >> temp;
    stack<char> s;
    stack<char> t;
    string result = "";
    for (int i = 0; i < temp.length(); i++) {
        if (!isalpha(temp[i])) {
            if (!(temp[i] == '(' || temp[i] == ')')) {
                s.push(temp[i]);
            }
        }
        else
            result += temp[i];
    }
}