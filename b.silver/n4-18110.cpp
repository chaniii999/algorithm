#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    double pp = arr.size();
    double mid = round(pp *0.3 + 0.5);
    int k =(mid)/2;


    int sum = 0;
    for (int i = k; i < arr.size()-k; i++) {
        sum += arr[i];
    }
    double ans = (double)sum / ((double)arr.size() - k*2) + 0.5;
    int a = (int)ans;


    cout << a;
}