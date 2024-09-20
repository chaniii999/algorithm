#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int b[n];
    vector<char> result(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i=0; i<n; i++) {
        if (a[i] ==  b[i]) {
            result[i] = 'D';
            continue;
        }
        if ((a[i] == 3 && b[i] == 2) 
        || ( a[i] == 2 && b[i] == 1) 
        || (a[i] == 1 && b[i] == 3))
            result[i] = 'A'; 
        else
            result[i] = 'B';
    }

    for (int i=0; i<n; i++)
        cout << result[i] << "\n";
}