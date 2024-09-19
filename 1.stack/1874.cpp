#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    vector<int> v;
    stack<int> s;
    vector<char> ans;
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++) {
        while (cnt < v[i]) {
            s.push(++cnt);
            ans.push_back('+');
        }
        if (!s.empty() && s.top() == v[i]) {
            // 비어있지않으멶서 현재 top이 v[i] 팝되어야하는 수열의 값
            //과 같은 경우 pop 진행
            ans.push_back('-'); 
            s.pop();
        } // 현재 top이 해당 수열과 값이 다를경우 fail
        else {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";

}