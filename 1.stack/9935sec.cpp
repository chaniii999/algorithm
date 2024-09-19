//문자열 폭발

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string total,boom;
    cin >> total;
    cin >> boom;
    string ans= "";
    stack<char> s;

    int cnt = 0; // boom의 콤보
    for (int i = 0; i < total.size(); i++) {
        // 다음 콤보가 아니라면 == 콤보가 깨짐
        while (!s.empty() && total[i] != boom[s.top() + 1]) {
            s.pop();
        }
       s.push(i); 
    }





    if (ans.empty()) {
        cout << "FRULA";
        return 0;
    }
    cout << ans;
    









}