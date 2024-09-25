#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> gp;
vector<int> root;
vector<bool> vis;

int dfs(int cur, int end) {
    if (cur == end) return 0; // 도착 지점에 도달했을 때 거리 0 반환

    int minDistance = INT_MAX; // 최솟값 초기화

    for (int next : gp[cur]) {
        if (vis[next]) continue;
        vis[next] = true;
        int distance = dfs(next, end); // 다음 정점으로 DFS
        if (distance != INT_MAX) {
            minDistance = min(minDistance, distance + 1); // 거리 업데이트
        }
        vis[next] = false; // 방문 상태 되돌리기
    }

    return minDistance; // 최솟값 반환
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    gp.resize(n + 1);
    root.resize(n + 1, INT_MAX); // 최댓값으로 초기화
    vis.resize(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        gp[a].push_back(b);
    }

    vis[1] = true;

    for (int i = 2; i <= n; i++) { // 2부터 n까지 반복
        int distance = dfs(1, i);
        cout << i << ":" << distance << "\n";
    }
}
