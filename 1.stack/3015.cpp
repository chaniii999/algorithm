#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    stack<pair<int, int>> s; // (키, 같은 키의 사람 수)
    long long ans = 0;

    for (int i = 0; i < N; i++) {
        int cnt = v[i];
        int count = 1;

        // 현재 사람의 키가 스택 top의 키보다 크거나 같은 경우
        while (!s.empty() && s.top().first <= cnt) {
            ans += s.top().second; // 쌍의 수 추가
            if (s.top().first == cnt) {
                count += s.top().second; // 같은 키의 사람 수를 누적
            }
            s.pop();
        }

        // 스택이 비어있지 않다면 현재 사람과 스택의 top 사람 간의 쌍 추가
        if (!s.empty()) {
            ans++;
        }

        // 현재 사람을 스택에 추가
        s.push({cnt, count});
    }

    cout << ans << '\n';
    return 0;
}
