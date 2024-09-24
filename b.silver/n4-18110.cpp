#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int trim = round(n * 0.15);

    int sum = 0;
    for (int i = trim; i < n - trim; i++) {
        sum += arr[i];
    }

    int count = n - 2 * trim;

    int result = round(double(sum) / count);

    cout << result << '\n';


}