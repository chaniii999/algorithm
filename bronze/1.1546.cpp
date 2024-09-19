#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<double> arr(n);
    int mx  = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (mx < arr[i])
            mx = arr[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) { 
        arr[i] = arr[i]/mx*100;
        sum += arr[i];
    }
    sum /= n;
    cout << sum;

}