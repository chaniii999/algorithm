#include <bits/stdc++.h>
using namespace std;
    int k;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    stack<int> s;
    long long ans = 0;

    cin >> k;
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    for (int i = 0; i < k; i++) {
        while(!s.empty() && s.top() <= v[i])
            s.pop();
        
        ans+=s.size();

        s.push(v[i]);
    }
    cout << ans;

}