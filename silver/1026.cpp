#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> p;
    vector<int> k;
    for (int i =0; i < n; i++) {
        int t;
        cin >> t;
        p.push_back(t);
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        k.push_back(t);
    }
    sort(k.begin(), k.end());
    reverse(k.begin(), k.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i] * k[i];
    }
    cout << sum;

}