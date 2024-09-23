#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int bag = 0;
    while (n > 0) {
        if ( n % 5 == 0) {
            bag+= n /5;
            cout << bag;
            return 0;
        }
        n -= 3;
        bag++;
    }
    if (n % 5 == 0) {}
    cout << -1;
    return 0;
 
}