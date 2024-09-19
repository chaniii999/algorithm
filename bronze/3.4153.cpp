#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        vector<int> v;
        for (int i = 0; i <3;i++) {
            int t;
            cin >> t;
            v.push_back(t);
        }
        sort(v.begin(), v.end());
        if (v[0] == 0 && v[1] == 0 && v[2] == 0)
            return 0;
        if (v[0]*v[0] + v[1]*v[1] == v[2]*v[2])
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }


}