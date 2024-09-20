#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<bool> arr(n + 1, false);
    vector<int> ans;
    int p = k;
    while (arr[p] == false_type) {
        arr[p] = true;
        ans.push_back(p);
        if (p + k == n)
            p = n;
        else
            p = (p + k) % n;
    }
    cout << "<";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i!=ans.size()-1) cout << ", ";
    }
    cout << ">";

}