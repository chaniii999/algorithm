#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    vector<int> v;
    vector<int> ans;
    stack<int> s;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    for (int i = 0; i < n; i++) {
        //비어있지않으면서 현재 값이 top보다 클경우
        // = top이 수신받지못하는 경우
        // top을 pop한다.
        while (!s.empty() && v[i] > v[s.top()]) {
            s.pop();
        }

        if (s.empty()) {
            // 수신받을 탑이 없으므로 0을 전달
            ans.push_back(0);
        } else // 수신받은 탑의 인덱스 + 1 을 전달 
            ans.push_back(s.top() + 1);
        
        s.push(i); // 다음 차례로 이동
    }
    for(int j : ans) {
        cout << j << " ";
    }




    

}