#include <bits/stdc++.h>
using namespace std;
int dx[3] = {1,-1,5};
int arr[10001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s,e;
    cin >> s >> e;
    fill(arr,arr + 10001, 0);
    queue<int> q;
    q.push(s);
    arr[s] = 1;

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i = 0; i < 3; i++) {
            int k = cur +dx[i];

            if (arr[k] != 0) continue;
            if (k < 0 || k > 10000) continue;
            
            arr[k] = arr[cur] + 1;
            q.push(k);
        }
    }
    cout << arr[e] - 1;
}