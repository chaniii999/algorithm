#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    vector<long> num;
    vector<long> in;
    vector<long> ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        num.push_back(k);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        in.push_back(k); 
    }



    for (int i = 0; i < m; i++) {
        bool flag = 0;
        for (int j = 0; j < n; j++) {
            if (in[i] == num[j]) {
                ans.push_back(1);
                flag = 1;
                break;
            }
        }
        if (!flag)
            ans.push_back(0);
    }

    for(int i:ans) {
        cout << i << "\n";
    }

}