#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    string b;
    cin >> a >> b;
    int i = a * (b[2] - '0');
    int j = a * (b[1] - '0');
    int k = a * (b[0] - '0');
    int p = i+j*10+k*100;
    cout << i<< "\n";
    cout << j<< "\n";
    cout << k<< "\n";
    cout << p<< "\n";
    return 0;

}