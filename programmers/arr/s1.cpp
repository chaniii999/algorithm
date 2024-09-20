#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    vector<int> arr(n);
    vector<int> ans;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << arr[0] << " ";

    for(int i = 1; i < n; i++)
        if (arr[i] > arr[i -1])
            cout << arr[i] << " ";

}