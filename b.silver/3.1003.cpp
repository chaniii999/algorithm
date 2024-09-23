#include <bits/stdc++.h>
using namespace std;

int z = 0;
int o = 0;

void fibo(int n) {
    if (n == 0)
        z++;
    if (n == 1)
        o++;
    for (int i = 2; i <= n; i++)
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        fibo(n);
        cout << z << " " << o << "\n";
        z = 0;
        o = 0;
    }
}