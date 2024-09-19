#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;  
    vector<int> ans;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    
    for (int i = n - 1; i > 0; i--) {
        int k = i -1;
        while (true) {
            if (v[i] <= v[k]) {
                k++;
                break;
            }
            if (k == 0)
                break;
            k--;
        }
        ans.push_back(k);
    }
    ans.push_back(0);
    reverse(ans.begin(),ans.end());
    for (int k:ans) {
        cout << k << " ";
    }
}