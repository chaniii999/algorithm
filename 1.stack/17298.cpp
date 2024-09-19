#include <bits/stdc++.h>
using namespace std;

int k;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    stack<int> s;
    cin >> k;
    // k만큼 -1 로 초기화 (default : 조건 불만족)
    vector<int> ans(k, -1);

    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    for (int i = 0; i < k; i++) {
        while (!s.empty() && v[i] > v[s.top()])
        {
            // v[i] 가 크면 조건만족이니 
            int index = s.top();
            // s.top 번째 숫자의 nge는 v[i]이다.
            ans[index] = v[i];
            s.pop();
        }
        
        s.push(i);
    }
    for (int i:ans) {
        cout << i << " ";
    }
}