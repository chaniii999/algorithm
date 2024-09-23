#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp;
    cin >> temp;
    stack<char> s;

    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == ')') {
            while (!s.empty() && s.top() != '(') // '('가 top이 될때까지
                s.pop();
            if (!s.empty())
                s.pop(); // '('도 pop
        }
        else
            s.push(temp[i]);
    }

    string result = "";
    while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }

    cout << result;
}