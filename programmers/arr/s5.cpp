#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];


    int mx = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        // 가로 합
        for (int j = 0; j < n; j++)
                sum += arr[i][j];
        mx = max(mx, sum);
        sum = 0;
        // 세로합
        for (int j = 0; j < n; j++) {
            sum += arr[j][i];
        }
        mx = max(mx, sum);
    }
    int sum = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][j];
        j++;
    }
    mx = max(mx, sum);
    sum = 0;
    j = 0;
    for (int i = n-1; i >= 0; i--) {
        sum += arr[i][j];
        j++;
    }
    mx = max(mx, sum);
    cout << mx;
    return 0;
 
}