#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int ans =0;
    for(int i=0; i < v.size(); i++) {
            ans += v[i]*v[i];
    }
    cout << ans % 10;
}