#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    cin >> temp;
    stack<char> s;
    int cnt = 0;

    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] == '(')
            s.push(temp[i]);
        else { // temp[i] == ')'
            s.pop();
            if (temp[i-1] == '(')// 레이저라면.
                cnt += s.size();
            else
                cnt++;  // 레이저가 아니면 막대기의 끝이다.
        }
    }
    cout << cnt;
}