#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string temp;
    cin >> temp;
    stack<int> s;

    for (int i = 0; i < temp.length(); i++) {
        if (isdigit(temp[i])) {
            s.push(temp[i] - '0');
        } else {
            int b = s.top(); s.pop(); // 두 번째 피연산자
            int a = s.top(); s.pop(); // 첫 번째 피연산자
            if (temp[i] == '+')
                s.push(a + b);
            if (temp[i] == '-')
                s.push(a - b);
            if (temp[i] == '*')
                s.push(a * b);
            if (temp[i] == '/')
                s.push(a / b);
        }
    }
    cout << s.top(); // 결과 출력
}
